#ifndef _GRAPHICALNODESMANAGER_H_
#define _GRAPHICALNODESMANAGER_H_


#include <QQuickItem>
#include <QQuickView>
#include "GraphicalNode.hpp"

class GraphicalNodesManager {
private:
	QQuickView* view;
	QQuickItem* parentItem;
public:
	GraphicalNodesManager(QQuickView* view, QQuickItem* parent);
	GraphicalNode* newNode() const;
};




#endif