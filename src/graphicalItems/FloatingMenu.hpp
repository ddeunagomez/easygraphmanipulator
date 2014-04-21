#ifndef _FLOATINGMENU_H_
#define _FLOATINGMENU_H_

#include <QQuickItem>
#include "GraphicalNode.hpp"


class FloatingMenu : public QQuickItem {
	Q_OBJECT
	Q_PROPERTY(GraphicalNode* target READ target WRITE setTarget NOTIFY onTargetNodeChanged)
	Q_PROPERTY(bool hLayout READ hLayout WRITE setHLayout NOTIFY onLayoutChanged)
private:
	GraphicalNode* _target;
	bool _horizontalLayout;
protected slots:
	void locateOnTarget();
public:
	FloatingMenu(QQuickItem* p = NULL);
	GraphicalNode* target() const;
	void setTarget(GraphicalNode* n);
	bool hLayout() const;
	void setHLayout(bool hl);
signals:
	void onTargetNodeChanged();
	void onLayoutChanged();
};


#endif