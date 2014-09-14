#include <QSGSimpleRectNode>
#include <QQmlComponent>
#include <QQmlEngine>
#include <QtGlobal>
#include <QObject>
#include <QColorDialog>

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
	QPen pen(QColor("grey"), 1);
	painter->setPen(pen);
	painter->setBrush(QBrush(_color, Qt::SolidPattern));
	painter->setRenderHints(QPainter::Antialiasing, true);
	painter->drawEllipse(boundingRect());
}

bool GraphicalNode::selected() const {
	return _selected;
}

void GraphicalNode::setSelected(bool s) {
	_selected = s;
	emit onSelectionChanged(s);
}

QColor GraphicalNode::color() const {
	return _color;
}

void GraphicalNode::setColor(QColor c){
	_color = c;
	emit onColorChanged(c);
	update();
}

void GraphicalNode::setColorGUI(){
    _color = QColorDialog::getColor(_color, (QWidget*)this->parent(), "Color");
    setColor(_color);
}

QString GraphicalNode::text() const {
    return _text;
}

void GraphicalNode::setText(QString t){
    _text = t;
    emit onTextChanged(t);
    update();
}


ActionIndicator::ActionIndicator(QQuickItem* p) 
: QQuickPaintedItem(p){
	setFlag(QQuickItem::ItemHasContents, true);
}

void ActionIndicator::paint(QPainter* painter){
	QPen pen2(_color,3);
	painter->setPen(pen2);
	painter->setBrush(Qt::NoBrush);
	painter->setRenderHints(QPainter::Antialiasing, true);
	painter->drawArc(QRectF(1,1,width()-2,height()-2),0,16*90);
	painter->drawArc(QRectF(1,1,width()-2,height()-2),0+16*180,16*90);
}

QColor ActionIndicator::color() const {
	return _color;
}

void ActionIndicator::setColor(QColor c){
	_color = c;
	emit onColorChanged(c);
	update();
}
