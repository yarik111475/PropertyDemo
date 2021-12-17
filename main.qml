import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import qt.examples.propertydemo 1.0

Window {
    visible: true
    width: 300
    height: 480
    title: qsTr("Hello World")
    Column{
        anchors.centerIn: parent;
        anchors.margins: 10;
        spacing: 10;
        ColorItem{
            id: colorItem;
            width: 200;
            height: 100;
        }
        Button{
            id: redButton;
            anchors.horizontalCenter: parent.horizontalCenter;
            text: "Red";
            onClicked: colorItem.color="red";
        }
        Button{
            id: greenButton;
            anchors.horizontalCenter: parent.horizontalCenter;
            text: "Green";
            onClicked: colorItem.color="green";
        }
        Button{
            id: blueButton;
            anchors.horizontalCenter: parent.horizontalCenter;
            text: "Blue";
            onClicked: colorItem.color="blue";
        }
    }
}
