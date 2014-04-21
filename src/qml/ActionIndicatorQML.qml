import EasyGraph 1.0
import QtQuick 2.0

ActionIndicator {
	id: root
	visible: true;
	z: 1000
	state: "disabled"
    states: [
        State{
            name: "selection"
            PropertyChanges{target: root; visible: true}
            PropertyChanges{target: root; degrees: degrees + 16*360}
        },
        State{
            name: "disabled"
            PropertyChanges{target: root; visible: false}
        }
    ]


	Behavior on degrees{
    	NumberAnimation{
    		duration: 5000
    		onRunningChanged: {
    			if (!running){
    				root.degrees += 16*360
    			}
    		}
    	}
    }
}