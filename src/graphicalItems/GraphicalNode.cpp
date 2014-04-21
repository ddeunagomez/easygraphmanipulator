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

GraphicalNode::GraphicalNode() : QQuickPaintedItem() {
	setFlag(QQuickItem::ItemHasContents, true);
}

/*QSGNode* GraphicalNode::updatePaintNode(QSGNode * node, UpdatePaintNodeData * upnd){
	qDebug() << "here";
	QSGSimpleRectNode *n = static_cast<QSGSimpleRectNode *>(node);
    //if (!n) {
        n = new QSGSimpleRectNode();
        n->setColor(Qt::blue);
    //}
    n->setRect(boundingRect());
    return n;
}*/

void GraphicalNode::paint(QPainter* painter){
	QPen pen(QColor("grey"), 1);
	painter->setPen(pen);
	painter->setBrush(QBrush("blue", Qt::SolidPattern));
	painter->setRenderHints(QPainter::Antialiasing, true);
	painter->drawEllipse(boundingRect());
	
}