import EasyGraph 1.0
import QtQuick 2.0


GraphicalNode {
	id: node
	width: 100
	height: 100
	x :150;
	y :100;

	ActionIndicatorQML {
		id: actionIndicator
		width: node.width; height: node.height
	}

	MouseArea {
        id: dragArea
        anchors.fill: parent
        drag.target: parent
        onPositionChanged: {
        	node.onPositionChanged();
        }
        onPressed:{
        	node.state = "selected"
        }
        onReleased:{
        	node.state = "unselected"
        }
        onClicked: {
        	node.state = "selected"
        }
    }

    state: "unselected"
    states: [
        State{
            name: "selected"
            PropertyChanges{target: node; selected: true}
            PropertyChanges{target: actionIndicator; state:"selection"}
        },
        State{
            name: "unselected"
            PropertyChanges{target: node; selected: false}
            PropertyChanges{target: actionIndicator; state:"disabled"}
        }
    ]

}