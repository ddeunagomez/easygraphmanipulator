#include "GraphicalNodesManager.hpp"

GraphicalNodesManager::GraphicalNodesManager(QQuickView* view, QQuickItem* parent)
	: view(view), parentItem(parent){

}

GraphicalNode* GraphicalNodesManager::newNode() {
    GraphicalNode* n = GraphicalNode::GraphicalNodeFactory(view,parentItem);
    _nodes.append(n);
    return n;
}

GraphicalNode* GraphicalNodesManager::nodeAt(int i) const {
    return _nodes.at(i);
}
