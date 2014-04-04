#ifndef _NODE_HPP_
#define _NODE_HPP_


#include <QList>
#include <QString>
#include <QDebug>

#include "Iterable.hpp"

template<class T>
class Node : public Iterable< QList< Node<T>* > >{
private:
	static int ID;
	int _id;
	T _content;
protected:
	QList< Node<T>* >* getNeighbors() const {return this->_data;}
public:
	
	Node();
	Node(const T c); 
	~Node();
	void connectTo(Node<T>* n);
	void disconnectFrom(Node<T> *n);
	void disconnect();
	bool isConnectedTo(Node<T>* n) const;
	int adjacentCount() const;
	int getId() const;
	T getContent() const;
	void setContent(const T c);
	QString showLocalTopology() const;
};

template <class T>
int Node<T>::ID = 0;

template <class T>
Node<T>::Node() {
	this->_id = Node::ID++;
}

template <class T>
Node<T>::Node(const T c) {
	this->_id = Node::ID++;
	setContent(c);
}

template <class T>
Node<T>::~Node() {
	while(!this->getNeighbors()->isEmpty()) {
		disconnectFrom(this->getNeighbors()->first());
	}
}

template <class T>
void Node<T>::connectTo(Node<T>* n) {
	if (n == this)
		return;
	if (!this->getNeighbors()->contains(n) && !n->getNeighbors()->contains(this)) {
		this->getNeighbors()->append(n);
		n->getNeighbors()->append(this);
	}
}

template <class T>
void Node<T>::disconnectFrom(Node<T> *n){
	if (this->getNeighbors()->contains(n) || n->getNeighbors()->contains(this)) {
		this->getNeighbors()->removeOne(n);
		n->getNeighbors()->removeOne(this);
	}
}

template <class T>
void Node<T>::disconnect(){
	typename Node<T>::const_iterator it;
	for (it = this->begin(); it != this->end(); ++it) {
		(*it)->disconnectFrom(this);
	}
}

template <class T>
bool Node<T>::isConnectedTo(Node<T>* n) const{
	return this->getNeighbors()->contains(n) && n->getNeighbors()->contains(const_cast<Node* const>(this));
}

template<class T>
int Node<T>::adjacentCount() const {
	return this->getNeighbors()->length();
}

template <class T>
int Node<T>::getId() const {
	return _id;
}

template <class T>
T Node<T>::getContent() const{
	return _content;
}

template <class T>
void Node<T>::setContent(const T c){
	this->_content = c;
}

template <class T>
QString Node<T>::showLocalTopology() const {
	QString str = QString::number(_id);
	str += " -- ";
	typename Node<T>::const_iterator it;
	for (it = this->begin(); it != this->end(); ++it) {
		str += QString::number((*it)->_id) + " ";
	}
	return str; 
}

#endif