import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15
import com.cong.libs 1.0
import QtMultimedia 5.15
import QtQuick.Controls.Styles 1.4
import QtCharts 2.15

//import QtQuick.Enterprise.Controls 1.3
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    //    MyButton {
    //        id: firstButton
    //        x: 100
    //        y: 100
    //    }
    Loader {
        //        width: 200
        //        height: 200
        source: "MyButton.qml"
    }

    Text {
        anchors.centerIn: parent
        id: myContextText
        text: myCppObjectInQml.value
    }
    MyCppClassQML {
        id: myCppObjectInQml
        value: 300
        onValueChanged: {
            console.log("hehe")
        }
        onSomethingHasChanged: {
            console.log("huhu")
        }
    }
    Audio {
        id: myMusicPlayer
        source: "qrc:/new/prefix1/sound.wav"
    }

    Button {
        width: 50
        height: 50
        onClicked: {
            console.log("play my sound")
            myMusicPlayer.play()
        }
    }

    //    ListView {
    //        width: 180
    //        height: 200

    //        model: ContactModel {}
    //        delegate: Text {
    //            text: name + ": " + number
    //        }
    //    }
    //    Rectangle {
    //        width: 400
    //        height: 400
    //        color: "gray"
    //        LineEdit {
    //            anchors.centerIn: parent
    //            id: myLineEdit
    //        }
    //    }
    Text {
        id: name
        text: firstButton.myState
    }

    ChartView {
        id: bar
        x: 473
        y: -138
        width: 300
        height: 300
        BarSeries {
            name: "BarSeries"
            BarSet {
                values: [2, 2, 3]
                label: "Set1"
            }

            BarSet {
                values: [5, 1, 2]
                label: "Set2"
            }

            BarSet {
                values: [3, 5, 8]
                label: "Set3"
            }
        }
    }

    //    ChartView {
    //        id: bar
    //        x: 485
    //        y: -168
    //        width: 300
    //        height: 300
    //        BarSeries {
    //            name: "BarSeries"
    //            BarSet {
    //                values: [2, 2, 3]
    //                label: "Set1"
    //            }

    //            BarSet {
    //                values: [5, 1, 2]
    //                label: "Set2"
    //            }

    //            BarSet {
    //                values: [3, 5, 8]
    //                label: "Set3"
    //            }
    //        }
    //    }

    //    CircularGaugeStyle {
    //        needle: Rectangle {
    //            y: outerRadius * 0.15
    //            implicitWidth: outerRadius * 0.03
    //            implicitHeight: outerRadius * 0.9
    //            antialiasing: true
    //            color: Qt.rgba(0.66, 0.3, 0, 1)
    //        }
    //    }
    //    ChartView {
    //        width: 400
    //        height: 300
    //        theme: ChartView.ChartThemeBrownSand
    //        antialiasing: true

    //        PieSeries {
    //            id: pieSeries
    //            PieSlice {
    //                label: "eaten"
    //                value: 94.9
    //            }
    //            PieSlice {
    //                label: "not yet eaten"
    //                value: 5.1
    //            }
    //        }
    //    }
}
