/****************************************************************************
**
** Copyright (C) 2019 Luxoft Sweden AB
** Copyright (C) 2018 Pelagicore AG
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Neptune 3 UI.
**
** $QT_BEGIN_LICENSE:GPL-QTAS$
** Commercial License Usage
** Licensees holding valid commercial Qt Automotive Suite licenses may use
** this file in accordance with the commercial license agreement provided
** with the Software or, alternatively, in accordance with the terms
** contained in a written agreement between you and The Qt Company.  For
** licensing terms and conditions see https://www.qt.io/terms-conditions.
** For further information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 or (at your option) any later version
** approved by the KDE Free Qt Foundation. The licenses are as published by
** the Free Software Foundation and appearing in the file LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
** SPDX-License-Identifier: GPL-3.0
**
****************************************************************************/

import QtQuick 2.8
import QtQuick.Controls 2.3
import QtQuick.Layouts 1.3
import shared.utils 1.0

import shared.Style 1.0
import shared.Sizes 1.0

Control {
    id: root

    property ListModel model

    property string currentLanguage

    signal languageRequested(string languageCode, string language)

    contentItem: ListView {
        id: view
        clip: true
        interactive: contentHeight > height

        model: root.model

        delegate: RadioDelegate {
            id: languageDelegate
            width: ListView.view.width
            height: Sizes.dp(110)
            checked: (model.language === root.currentLanguage)

            Cursor {
                onActivated:  { root.languageRequested(model.language, model.title); }
            }

            onToggled: { root.languageRequested(model.language, model.title); }

            indicator: Rectangle {
                implicitWidth: Sizes.dp(30)
                implicitHeight: Sizes.dp(30)
                anchors.left: parent.left
                anchors.leftMargin: Sizes.dp(20)
                anchors.verticalCenter: parent.verticalCenter
                radius: width / 2
                border.width: Sizes.dp(2)
                border.color: (languageDelegate.checked || languageDelegate.down) ? Style.accentColor : Style.buttonColor
                color: "transparent"

                Rectangle {
                    width: Sizes.dp(15)
                    height: Sizes.dp(15)
                    x: (parent.width - width) / 2
                    y: (parent.height - height) / 2
                    radius: width / 2
                    color: parent.border.color
                    visible: languageDelegate.checked || languageDelegate.down
                }
            }

            contentItem: Column {
                objectName: "language_" + model.language
                anchors.left: languageDelegate.indicator.right
                anchors.leftMargin: languageDelegate.indicator.implicitWidth
                anchors.right: parent.right
                anchors.rightMargin: Sizes.dp(20)
                anchors.verticalCenter: parent.verticalCenter
                Label {
                    text: model.title
                }
                Label {
                    text: model.subtitle
                    font.pixelSize: Sizes.fontSizeS
                }
            }

            Image {
                anchors.bottom: parent.bottom
                width: parent.width
                source: Style.image("list-divider")
                visible: index !== view.count - 1
                mirror: root.mirrored
            }
        }
    }
}
