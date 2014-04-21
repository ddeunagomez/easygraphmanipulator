#ifndef _GRAPHICALNODE_HPP_
#define _GRAPHICALNODE_HPP_

#include <QQuickPaintedItem>
#include <QQuickView>
#include <QPainter>

class GraphicalNode : public QQuickPaintedItem {
	Q_OBJECT
public:
	static GraphicalNode* GraphicalNodeFactory(QQuickView* v, QQuickItem* parent);
	GraphicalNode();
	//QSGNode * updatePaintNode(QSGNode * oldNode, UpdatePaintNodeData * upnd);
	void paint(QPainter* painter);
signals:
	void onPositionChanged();
};



#endif