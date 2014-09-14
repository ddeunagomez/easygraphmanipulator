import QtQuick 2.0


Rectangle {
    id: root
	width: 3000; height: 3000
	color: "#dddddd"

    MouseArea {
        anchors.fill: parent
        onClicked: {
            for (var i = 0 ; i < root.children.length; i++) {
                if(root.children[i].objectName == "GRAPHICAL_NODE_QML"){
                   root.children[i].unselect()
                }
            }
        }
    }
}
