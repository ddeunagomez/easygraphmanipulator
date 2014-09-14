#include "FloatingMenu.hpp"

#define PADDING 15

FloatingMenu::FloatingMenu(QQuickItem* p) 
: QQuickItem(p), _target(NULL),_horizontalLayout(false){
	setFlag(QQuickItem::ItemHasContents, false);
	connect(this,SIGNAL(onTargetNodeChanged()),this,SLOT(locateOnTarget()));
}

void FloatingMenu::locateOnTarget() {
	if (_target == NULL){
		return;
	}
	bool ret = QMetaObject::invokeMethod(this, "relocateMenu");
	if (!ret)
        qWarning() << "Error while calling relocateMenu on the QML side. " << __FILE__ << "  " <<__LINE__;
}


GraphicalNode* FloatingMenu::target() const {
	return _target;
}

void FloatingMenu::setTarget(GraphicalNode* n) {
	if (_target != NULL)
		disconnect(_target);
	_target = n;
	if (_target != NULL) {
		connect(_target, SIGNAL(onPositionChanged(int,int)), 
			this, SLOT(locateOnTarget()));
		emit onTargetNodeChanged();
	}
}

bool FloatingMenu::hLayout() const{
	return _horizontalLayout;
}

void FloatingMenu::setHLayout(bool HL){
	_horizontalLayout = HL;
	emit onLayoutChanged();
}
