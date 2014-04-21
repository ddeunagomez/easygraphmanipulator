#include <QSGSimpleRectNode>
#include <QQmlComponent>
#include <QQmlEngine>
#include <QtGlobal>
#include <QObject>

#include "GraphicalNode.hpp"


/**
 * Creates graphical CKNodes by loading the GraphicalNode.qml file.
 */
GraphicalNode* GraphicalNode::GraphicalNodeFactory(QQuickView* v, QQuickItem* parent){
	QQmlComponent component(v->engine(), QUrl("../qml/GraphicalNode.qml"));
	if (!component.isReady()) {
		qWarning() << "Component not ready";
	}
	QObject* obj = component.create();
	GraphicalNode* node = qobject_cast<GraphicalNode *>(obj);
	node->setParentItem(parent);
	return node;

}

GraphicalNode::GraphicalNode(QQuickItem* p) 
: QQuickPaintedItem(p), _selected(false) {
	setFlag(QQuickItem::ItemHasContents, true);
}

void GraphicalNode::paint(QPainter* painter){
	QPen pen(QColor("grey"), 0);
	painter->setPen(pen);
	painter->setBrush(QBrush("blue", Qt::SolidPattern));
	painter->setRenderHints(QPainter::Antialiasing, true);
	painter->drawEllipse(boundingRect());
}

bool GraphicalNode::selected() const {
	return _selected;
}

void GraphicalNode::setSelected(bool s) {
	_selected = s;
	emit onSelectionChanged();
}





ActionIndicator::ActionIndicator(QQuickItem* p) 
: QQuickPaintedItem(p), _degrees(0){
	setFlag(QQuickItem::ItemHasContents, true);
}


void ActionIndicator::paint(QPainter* painter){
	QPen pen2(QColor("yellow"),3);
	painter->setPen(pen2);
	painter->setBrush(Qt::NoBrush);
	painter->setRenderHints(QPainter::Antialiasing, true);
	painter->drawArc(QRectF(1,1,width()-2,height()-2),_degrees,16*90);
	painter->drawArc(QRectF(1,1,width()-2,height()-2),_degrees+16*180,16*90);
}

int ActionIndicator::degrees() const {
	return _degrees;
}

void ActionIndicator::setDegrees(int d){
	_degrees = d;
	update();
}