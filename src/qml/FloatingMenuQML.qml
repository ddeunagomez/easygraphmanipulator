import EasyGraph 1.0
import QtQuick 2.0


FloatingMenu {
    id: floatingMenuRoot
    width: 40;
    x:0;
    y:0;
    visible: (target != null);
    property bool animate: true;
    z:1000

    Grid { 
    	x: 0; y: 0
        spacing: 10
        columns: (parent.hLayout) ? 5 : 1;
        Button {
        	color: "brown"
        	height: 20
        	width:  40
            x:0;
        	animate: true
        	text: "Opt 1"
        	font.pointSize : 10
            onClicked: {
                nodesManager.newNode()
            }
        }
        Button {
        	color: "red"
        	height: 20
        	width:  40
            x:0;
        	animate: true
        	text: "Opt 2"
        	font.pointSize : 10
            onClicked: {
                target.setColorGUI()
            }
        }
        Button {
        	color: "blue"
        	height: 20
        	width:  40
            x:0;
        	animate: true
        	text: "Opt 3"
        	font.pointSize : 10
        }
    }

    function relocateMenu(){
        var PADDING = 15;
        if(target.x - width - PADDING > 0) { //lots of room
            x = target.x - width - PADDING ;
        } else if(target.x >= width) { //almost overriden by the node
            x = 0;
        } else { //overriden by the node
            if(hLayout)
                x = 0
            else
                x =  target.x + target.width + PADDING;
        }
        if(target.y >= 0) {
            y = target.y;
            hLayout = false;
        } else{
            y = target.y + target.height;
            hLayout = true;
        }
    }

    Behavior on x{
        enabled: floatingMenuRoot.animate;
        NumberAnimation {
            duration: 100
        }
    }
    Behavior on y{
        enabled: floatingMenuRoot.animate;
        NumberAnimation {
            duration: 100
        }
    }
}
