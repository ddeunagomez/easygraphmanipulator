#include "GraphicalNodesManager.hpp"

GraphicalNodesManager::GraphicalNodesManager(QQuickView* view, QQuickItem* parent)
	: view(view), parentItem(parent){

}

GraphicalNode* GraphicalNodesManager::newNode() const {
	return GraphicalNode::GraphicalNodeFactory(view,parentItem);
}