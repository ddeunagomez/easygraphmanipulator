import EasyGraph 1.0
import QtQuick 2.0


GraphicalNode {
	id: node
	width: 100
	height: 100
	x :150;
	y :100;


	MouseArea {
        id: dragArea
        anchors.fill: parent
        drag.target: parent
        onPositionChanged: {
        	node.onPositionChanged();
        }
    }
}