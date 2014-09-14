#ifndef _GRAPHICALNODE_HPP_
#define _GRAPHICALNODE_HPP_

#include <QQuickPaintedItem>
#include <QQuickView>
#include <QPainter>

class GraphicalNode : public QQuickPaintedItem {
	Q_OBJECT
	Q_PROPERTY(bool selected READ selected WRITE setSelected NOTIFY onSelectionChanged)
	Q_PROPERTY(QColor color READ color WRITE setColor NOTIFY onColorChanged)
    Q_PROPERTY(QString text READ text WRITE setText NOTIFY onTextChanged)
private:
	bool _selected;
	QColor _color;
    QString _text;
public:
	static GraphicalNode* GraphicalNodeFactory(QQuickView* v, QQuickItem* parent);
	GraphicalNode(QQuickItem* p = NULL);
	void paint(QPainter* painter);
public slots:
	bool selected() const;
	void setSelected(bool s);
	QColor color() const;
	void setColor(QColor d);
    void setColorGUI();
    QString text() const;
    void setText(QString s);
signals:
	void onPositionChanged(int x, int y);
	void onSelectionChanged(bool s);
	void onColorChanged(QColor);
    void onTextChanged(QString);
};




class ActionIndicator : public QQuickPaintedItem {
	Q_OBJECT
	Q_PROPERTY(QColor color READ color WRITE setColor NOTIFY onColorChanged)
private:
	QColor _color;
public:
	ActionIndicator(QQuickItem* p = NULL);
	void paint(QPainter* painter);
	QColor color() const;
	void setColor(QColor d);
signals:
	void onColorChanged(QColor);
};



#endif
