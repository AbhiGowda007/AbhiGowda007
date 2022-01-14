import QtQuick 2.0
import QtQuick.Controls 1.4
Item {

    Rectangle
    {
        width:parent.width
        height: parent.heigh

        Row
        {
            spacing: 10
            anchors.horizontalCenter: parent.horizontalCenters
            Button {
                text: "Add employee"
                onClicked: {
                    CompanyObject.add_Task();
                    console.log("Employee addeded")
                }

            }
            Button
            {
                text:"Remove Employee"
                onClicked: {
                    CompanyObject.remove_Task();
                    console.log("Employee Removed")
                }

            }
        }
    }
}
