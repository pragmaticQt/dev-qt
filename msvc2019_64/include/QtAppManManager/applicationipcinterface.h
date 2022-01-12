/****************************************************************************
**
** Copyright (C) 2019 Luxoft Sweden AB
** Copyright (C) 2018 Pelagicore AG
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Qt Application Manager.
**
** $QT_BEGIN_LICENSE:LGPL-QTAS$
** Commercial License Usage
** Licensees holding valid commercial Qt Automotive Suite licenses may use
** this file in accordance with the commercial license agreement provided
** with the Software or, alternatively, in accordance with the terms
** contained in a written agreement between you and The Qt Company.  For
** licensing terms and conditions see https://www.qt.io/terms-conditions.
** For further information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
** SPDX-License-Identifier: LGPL-3.0
**
****************************************************************************/

#pragma once

#include <QObject>
#include <QString>
#include <QVariant>
#include <qqml.h>
#if defined(QT_DBUS_LIB)
#  include <QDBusConnection>
#endif
#include <QtAppManCommon/global.h>

QT_BEGIN_NAMESPACE_AM

class Application;
class ApplicationIPCInterfaceAttached;
class IpcProxyObject;

class ApplicationIPCInterface : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("AM-QmlType", "QtApplicationManager.SystemUI/ApplicationIPCInterface 2.0")

    Q_PROPERTY(QObject *serviceObject READ serviceObject WRITE setServiceObject NOTIFY serviceObjectChanged)

public:
    explicit ApplicationIPCInterface(QObject *parent = nullptr);
    ~ApplicationIPCInterface();

    QString interfaceName() const;
    QString pathName() const;
    bool isValidForApplication(Application *app) const;
    QObject *serviceObject() const;
    void setServiceObject(QObject *serviceObject);

#if defined(QT_DBUS_LIB)
    bool dbusRegister(Application *app, QDBusConnection connection, const QString &debugPathPrefix = QString());
    bool dbusUnregister(QDBusConnection connection);
#endif

    Q_SIGNAL void serviceObjectChanged();

public:
    static ApplicationIPCInterfaceAttached *qmlAttachedProperties(QObject *object);

private:
    QObject *m_serviceObject = this;
    IpcProxyObject *m_ipcProxy = nullptr;

    friend class ApplicationIPCManager;
};

class ApplicationIPCInterfaceAttached : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("AM-QmlType", "QtApplicationManager.SystemUI/ApplicationIPCInterfaceAttached 2.0")

    Q_PROPERTY(QString sender READ sender)
    Q_PROPERTY(QVariant receivers READ receivers WRITE setReceivers)
    Q_PROPERTY(QVariant inProcessReceiversOnly READ inProcessReceiversOnly CONSTANT)

public:
    ApplicationIPCInterfaceAttached(QObject *object);

    QString sender() const;
    QVariant receivers() const;
    void setReceivers(const QVariant &receivers);
    QVariant inProcessReceiversOnly() const;

private:
    bool resolveProxy() const;

    QObject *m_object;
    mutable IpcProxyObject *m_proxy = nullptr;
};

QT_END_NAMESPACE_AM

QML_DECLARE_TYPEINFO(QT_PREPEND_NAMESPACE_AM(ApplicationIPCInterface), QML_HAS_ATTACHED_PROPERTIES)
