#ifndef _GRAPHICALNODE_HPP_
#define _GRAPHICALNODE_HPP_

#include <QQuickPaintedItem>
#include <QQuickView>
#include <QPainter>

class GraphicalNode : public QQuickPaintedItem {
	Q_OBJECT
	Q_PROPERTY(bool selected READ selected WRITE setSelected NOTIFY onSelectionChanged)
private:
	bool _selected;
public:
	static GraphicalNode* GraphicalNodeFactory(QQuickView* v, QQuickItem* parent);
	GraphicalNode(QQuickItem* p = NULL);
	void paint(QPainter* painter);
	bool selected() const;
	void setSelected(bool s);
signals:
	void onPositionChanged();
	void onSelectionChanged();
};




class ActionIndicator : public QQuickPaintedItem {
	Q_OBJECT
	Q_PROPERTY(int degrees READ degrees WRITE setDegrees NOTIFY onDegreesChanged)
private:
	int _degrees;
public:
	ActionIndicator(QQuickItem* p = NULL);
	void paint(QPainter* painter);
	int degrees() const;
	void setDegrees(int d);
signals:
	void onDegreesChanged();
};



#endif