#include <QGuiApplication>
#include <QQuickItem>
#include <QQuickView>
#include <QQmlContext>
#include <QQmlEngine>

#include "GraphicalNode.hpp"
#include "GraphicalNodesManager.hpp"
#include "FloatingMenu.hpp"


int main(int argc, char* argv[]){

	QGuiApplication app(argc, argv);
	
	//Register all the needed types in QML.
	qmlRegisterType<GraphicalNode>("EasyGraph", 1,0, "GraphicalNode");
	qmlRegisterType<FloatingMenu>("EasyGraph", 1,0, "FloatingMenu");


	//The only window known as QDeCView in QML.
	QQuickView* view = new QQuickView();
	view->setMinimumHeight(100);
	view->setMinimumWidth(100);
	view->setResizeMode(QQuickView::SizeRootObjectToView);

	//Context, to set properties from c++ to QML
	//QQmlContext* cxt =  view->rootContext();

	//Load the base.
	view->setSource(QUrl::fromLocalFile("../qml/MainWindow.qml"));
	view->show();

	GraphicalNodesManager manager(view,view->rootObject()->findChild<QQuickItem*>("mainLayer"));
	FloatingMenu* menu = view->rootObject()->findChild<FloatingMenu*>("mainMenu");	

	GraphicalNode* n1 = manager.newNode();
	//n1->setX(0);

	qDebug() << menu;
	menu->setTarget(n1);


	return app.exec();
}

