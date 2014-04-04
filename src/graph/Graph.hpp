#ifndef _GRAPH_HPP_
#define _GRAPH_HPP_


#include <QList>
#include <QString>
#include "Iterable.hpp"
#include "Node.hpp"


template<class T>
class Graph : public Iterable< QList< Node<T>* > >{
protected:
	QList< Node<T>* >* getNodes() const {return this->_data;}
public:
	Graph();
	Node<T>* createNode();
	Node<T>* createNode(T c);
	void removeNode(Node<T>* n);
	QString showTopology() const;
};


template<class T>
Graph<T>::Graph() {}

template<class T>
Node<T>* Graph<T>::createNode() {
	Node<T>* n = new Node<T>();
	this->getNodes()->append(n);
	return n;
}

template<class T>
Node<T>* Graph<T>::createNode(T c) {
	Node<T>* n = new Node<T>(c);
	this->getNodes()->append(n);
	return n;
}

template<class T>
void Graph<T>::removeNode(Node<T>* n) {
	if (this->getNodes()->contains(n)){
		this->getNodes()->removeOne(n);
		n->disconnect();
		delete n;
	}
}

template <class T>
QString Graph<T>::showTopology() const {
	QString str;
	typename Graph<T>::const_iterator it;
	for (it = this->begin(); it != this->end(); it++) {
		str += (*it)->showLocalTopology() + "\n";
	}
	return str; 
}

#endif