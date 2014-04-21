import EasyGraph 1.0
import QtQuick 2.0



Rectangle {
	width: 400; height: 400
	color: "#333333"

	Flickable {
		id: flickable
		anchors.fill: parent
		width: 400; height: 400
		contentWidth: layer.width; contentHeight: layer.height

		PaperSheet {
			id: layer
			objectName: "mainLayer"

			FloatingMenuQML{
				objectName: "mainMenu"
				id: menu
			}


			// Only show the scrollbars when the view is moving.
			states: State  {
				name: "ShowBars"
				when: flickable.movingVertically || flickable.movingHorizontally
				PropertyChanges  { target: verticalScrollBar; opacity: 1 }
				PropertyChanges  { target: horizontalScrollBar; opacity: 1 }
			}
		}

	}
	// Attach scrollbars to the right and bottom edges of the flickable.
    ScrollBar  {
    	id: verticalScrollBar
    	width: 12; height: flickable.height-12
    	anchors.right: flickable.right
    	opacity: 0
    	orientation: Qt.Vertical
    	position: flickable.visibleArea.yPosition
    	pageSize: flickable.visibleArea.heightRatio
    }

    ScrollBar  {
    	id: horizontalScrollBar
    	width: flickable.width-12; height: 12
    	anchors.bottom: flickable.bottom
    	opacity: 0
    	orientation: Qt.Horizontal
    	position: flickable.visibleArea.xPosition
    	pageSize: flickable.visibleArea.widthRatio
    }
}