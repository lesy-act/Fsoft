import QtQuick 2.0
Rectangle {
//    property string text: myTextInput.text
    width: 300
    height: 100
    color: "white"
    radius: 10
    border.color: "green"
    TextInput {
        id: myTextInput
        anchors.fill: parent
        text: "hello"
        font.pixelSize: parent.height - 4
    }
}
