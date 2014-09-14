import EasyGraph 1.0
import QtQuick 2.0

ActionIndicator {
    id: root
    z: 1000

    property bool enabled: false
    function show() {
        root.state = "enabled"
        enabled = true
    }
    function hide() {
        root.state = "disabled"
        enabled = false
    }
    function toggle() {
        if (enabled)
            hide()
        else
            show()
    }


    state: "disabled"
    states: [
        State{
            name: "enabled"
            PropertyChanges{target: root; visible: true}
        },
        State{
            name: "disabled"
            PropertyChanges{target: root; visible: false}
        }
    ]

    NumberAnimation on rotation{
        loops: Animation.Infinite
        running: root.visible
        duration: 4000;
        from: 0
        to: 360
    }
}
