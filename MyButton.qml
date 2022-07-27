import QtQuick 2.0
Item {
    property int myState: 1
    Rectangle {
        height: 100
        width: 100
        color: "Red"
        radius: 50
        MouseArea {
            anchors.fill: parent
            onClicked: {
                console.log("hello")
//                xx.showInfo()
                myState = !myState;
            }
        }
    }
}
