#ifndef _GRAPHICALNODESMANAGER_H_
#define _GRAPHICALNODESMANAGER_H_


#include <QQuickItem>
#include <QQuickView>
#include <QList>
#include "GraphicalNode.hpp"

class GraphicalNodesManager : public QObject{
    Q_OBJECT

private:
	QQuickView* view;
	QQuickItem* parentItem;
    QList<GraphicalNode*> _nodes;
public:
	GraphicalNodesManager(QQuickView* view, QQuickItem* parent);
public slots:
    GraphicalNode* newNode();
    GraphicalNode* nodeAt(int i) const;
};




#endif
