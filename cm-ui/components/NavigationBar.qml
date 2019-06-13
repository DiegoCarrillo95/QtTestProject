import QtQuick 2.9
import assets 1.0

Item {
    property bool isCollapsed: true

    anchors{
        top: parent.top
        bottom:  parent.bottom
        left: parent.left
    }
    width: isCollapsed ? Style.widthNavigationBarCollapsed : Style.heightNavigationBarExpanded

    Rectangle{
        anchors.fill: parent
        color: Style.colourNavigationBarBackground

        Column{
            width: parent.width

            NavigationButton{
                iconCharacter: "\uf0c9"
                description: ""
                hoverColor: "#993333"
                onNavigationButtonClicked: {
                    isCollapsed = !isCollapsed
                }
            }
            NavigationButton{
                iconCharacter: "\uf015"
                description: "Dashboard"
                hoverColor: "#993333"
                onNavigationButtonClicked: {
                    masterController.ui_navigationController.goDashboardView()
                }
            }
            NavigationButton{
                iconCharacter: "\uf234"
                description: "New Client"
                hoverColor: "#993333"
                onNavigationButtonClicked: {
                    masterController.ui_navigationController.goCreateClientView()
                }
            }
            NavigationButton{
                iconCharacter: "\uf002"
                description: "Find Client"
                hoverColor: "#993333"
                onNavigationButtonClicked: {
                    masterController.ui_navigationController.goFindClientView()
                }
            }
        }
    }
}
