import EasyGraph 1.0
import QtQuick 2.0



GraphicalNode {
	id: node
    objectName: "GRAPHICAL_NODE_QML"
	width: 100
	height: 100
	x :150;
	y :100;
    color: "blue"
    text: textEdit.text

    onColorChanged:{
        var c = oppositeColor(color);
        actionIndicator.color.r = c.r;
        actionIndicator.color.g = c.g;
        actionIndicator.color.b = c.b;
    }

    Component.onCompleted: {
        onColorChanged(color);
    }

	ActionIndicatorQML {
		id: actionIndicator
        width: node.width; height: node.height
	}

    function select(){
        for (var i = 0 ; i < node.parent.children.length; i++) {
            if(node.parent.children[i].objectName == "GRAPHICAL_NODE_QML"){
               node.parent.children[i].unselect()
            }
        }
        state = "selected"
        floatingMenu.target = node
    }
    function unselect() {
        state = "unselected"
    }

	MouseArea {
        id: dragArea
        anchors.fill: parent
        drag.target: parent
        onPositionChanged: {
        	node.onPositionChanged(mouse.x, mouse.y);
        }
        onPressed:{
            node.select()
        }
        onClicked: {
            node.select()
        }
    }

    TextEdit {
        id: textEdit
        anchors.centerIn: parent
        text: "New Node"
        cursorVisible: node.selected
    }

    state: "unselected"
    states: [
        State{
            name: "selected"
            PropertyChanges{target: node; selected: true}
            StateChangeScript { script: actionIndicator.show(); }
        },
        State{
            name: "unselected"
            PropertyChanges{target: node; selected: false}
            StateChangeScript { script: actionIndicator.hide(); }
        }
    ]

    function oppositeColor(color) {
        var r = color.r;
        var g = color.g;
        var b = color.b;

        var cmax = Math.max(r,g,b)
        var cmin = Math.min(r,g,b)
        var d = cmax - cmin

        var h = 60;
        switch (cmax) {
            case r:
                h *= ((g - b)/d) % 6;
                break;
            case g:
                h *= ((b - r)/d) + 2
                break;
            default: // b
                h *= ((r - g)/d) + 4
                break;
        }
        var s = d/cmax;
        var v = cmax;


        var c = v * s
        var x = c * (1 - Math.abs((h/60)%2-1))
        var m = v - c;

        // Black-gray-white
        if (cmin == cmax) {
            h = 0; s = 0; v = cmin;
            h += 180; h %= 360;
            return {r:r+m,g:g+m,b:b+m};
        }

        h += 180; h %= 360;

        if (0 <= h && h < 60 ) {
            r = c; g = x; b = 0;
        } else if (h < 120) {
            r = x; g = c; b = 0;
        } else if (h < 180) {
            r = 0; g = c; b = x;
        } else if (h < 240) {
            r = 0; g = x; b = c;
        } else if (h < 300) {
            r = x; g = 0; b = c;
        } else if (h < 360) {
            r = c; g = 0; b = x;
        }
        var res = {r:r+m,g:g+m,b:b+m}
        return res
    }

}
