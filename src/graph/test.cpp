#include "Node.hpp"
#include "SerializableGraph.hpp"

#include <QDebug>
#include <assert.h>

int main(void)
{

	SerializableGraph<int> g;
	Node<int>* n0 = g.createNode(0);
	assert(n0->getContent() == 0);
	n0->setContent(10);
	assert(n0->getContent() == 10);
	Node<int>* n1 = g.createNode(1);
	assert(n0->getId() != n1->getId());
	Node<int>* n2 = g.createNode(2);
	Node<int>* n3 = g.createNode(3);
	Node<int>* n4 = g.createNode(4);
	Node<int>* n5 = g.createNode(5);
	assert(!n0->isConnectedTo(n1));
	assert(n0->adjacentCount() == 0);
	n0->connectTo(n1);
	assert(n0->isConnectedTo(n1));
	assert(n0->adjacentCount() == 1);
	n0->connectTo(n2);
	n1->connectTo(n2);
	n1->connectTo(n1);
	assert(!n1->isConnectedTo(n1));
	n2->connectTo(n0);
	n3->connectTo(n2);
	n3->connectTo(n1);
	n5->connectTo(n2);

	qDebug() << g.showTopology();

	g.removeNode(n0);

	qDebug() << g.showTopology();

	n3->disconnectFrom(n2);

	qDebug() << g.showTopology();

	n3->disconnectFrom(n5);

	Graph<int>::iterator it = g.begin();
	qDebug() << g.toXmlString();

	return 0;
}