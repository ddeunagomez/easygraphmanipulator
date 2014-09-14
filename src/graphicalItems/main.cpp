#include <QApplication>
#include <QQuickItem>
#include <QQuickView>
#include <QQmlContext>
#include <QQmlEngine>

#include "GraphicalNode.hpp"
#include "GraphicalNodesManager.hpp"
#include "FloatingMenu.hpp"


int main(int argc, char* argv[]){

    QApplication app(argc, argv);
	
	//Register all the needed types in QML.
	qmlRegisterType<GraphicalNode>("EasyGraph", 1,0, "GraphicalNode");
	qmlRegisterType<FloatingMenu>("EasyGraph", 1,0, "FloatingMenu");
	qmlRegisterType<ActionIndicator>("EasyGraph", 1,0, "ActionIndicator");


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
    view->rootContext()->setContextProperty(QString("nodesManager"), &manager);
    FloatingMenu* menu = view->rootObject()->findChild<FloatingMenu*>("mainMenu");
    view->rootContext()->setContextProperty(QString("floatingMenu"), menu);

	GraphicalNode* n1 = manager.newNode();


	return app.exec();
}

