#ifndef _SERIALIZABLEGRAPH_HPP_
#define _SERIALIZABLEGRAPH_HPP_


#include <QString>
#include <QDomDocument>
#include <QDomElement>
#include "Graph.hpp"


template<class T>
class SerializableGraph : public Graph<T>{
public:
	SerializableGraph() : Graph<T>(){};
	QDomDocument toXml() const;
	QString toXmlString() const;
};

template<class T>
QDomDocument SerializableGraph<T>::toXml() const {
	QDomDocument doc;
	QDomElement root = doc.createElement("root");
	doc.appendChild(root);

	typename Graph<T>::const_iterator nodesIt;
	typename Node<T>::const_iterator neighborsIt;
	for (nodesIt = this->begin(); nodesIt != this->end(); nodesIt++) {
		QDomElement el = doc.createElement("node");
		el.setAttribute("id",QString::number((*nodesIt)->getId()));

		QDomElement neighbors = doc.createElement("neighbors");

		el.appendChild(neighbors);

		for (neighborsIt = (*nodesIt)->begin(); neighborsIt != (*nodesIt)->end(); neighborsIt++) {
			QDomElement neighbor = doc.createElement("neighbor");
			neighbor.setAttribute("id",QString::number((*neighborsIt)->getId()));
			neighbors.appendChild(neighbor);
		}
		root.appendChild(el);
	}
	return doc;
}

template<class T>
QString SerializableGraph<T>::toXmlString() const {
	return this->toXml().toString(4);
}


#endif
