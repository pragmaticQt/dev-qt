/****************************************************************************
**
** Copyright (C) 2019 Luxoft Sweden AB
** Copyright (C) 2018 Pelagicore AG
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QML Live tool.
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

#pragma once

#include <QtCore>
#include <QtQuick>

#include "contentadapterinterface.h"
#include "livedocument.h"
#include "qmllive_global.h"
#include "overlay.h"

class LiveRuntime;
class ContentPluginFactory;
class ResourceMap;
class UrlInterceptor;

class QMLLIVESHARED_EXPORT LiveNodeEngine : public QObject
{
    Q_OBJECT

public:
    enum WorkspaceOption {
        NoWorkspaceOption = 0x0,
        LoadDummyData = 0x1,
        AllowUpdates = 0x2,
        UpdatesAsOverlay = 0x4,
        AllowCreateMissing = 0x8
    };
    Q_DECLARE_FLAGS(WorkspaceOptions, WorkspaceOption)
#if QT_VERSION >= QT_VERSION_CHECK(5, 5, 0)
    Q_FLAG(WorkspaceOptions)
#else
    Q_FLAGS(WorkspaceOptions)
#endif

public:
    explicit LiveNodeEngine(QObject *parent = 0);
    ~LiveNodeEngine();

    QQmlEngine *qmlEngine() const;
    void setQmlEngine(QQmlEngine *qmlEngine);

    QQuickView *fallbackView() const;
    void setFallbackView(QQuickView *fallbackView);

    int xOffset() const;
    int yOffset() const;
    int rotation() const;

    QString workspace() const;
    void setWorkspace(const QString &path, WorkspaceOptions options = NoWorkspaceOption);
    ResourceMap *resourceMap() const;

    void setPluginPath(const QString& path);
    QString pluginPath() const;

    LiveDocument activeDocument() const;
    ContentAdapterInterface *activePlugin() const;
    QQuickWindow *activeWindow() const;

    void usePreloadedDocument(const LiveDocument &document, QObject *object, QQuickWindow *window,
                              const QList<QQmlError> &errors);
    void usePreloadedDocument(const QString &document, QQuickWindow *window,
                              const QList<QQmlError> &errors);

public Q_SLOTS:
    void setXOffset(int offset);
    void setYOffset(int offset);
    void setRotation(int rotation);
    void loadDocument(const LiveDocument& document);
    void delayReload();
    virtual void reloadDocument();
    void updateDocument(const LiveDocument &document, const QByteArray &content);

Q_SIGNALS:
    void activeDocumentChanged(const LiveDocument& document);
    void clearLog();
    void logIgnoreMessages(bool on);
    void documentLoaded();
    void activeWindowChanged(QQuickWindow *window);
    void logErrors(const QList<QQmlError> &errors);
    void workspaceChanged(const QString &workspace);

protected:
    virtual void initPlugins();
    QList<ContentAdapterInterface*> m_plugins;
    LiveDocument m_activeFile;
    LiveRuntime *m_runtime;

private Q_SLOTS:
    void onSizeChanged();

private:
    void checkQmlFeatures();
    QUrl errorScreenUrl() const;
    QUrl queryDocumentViewer(const QUrl& url);

private:
    int m_xOffset;
    int m_yOffset;
    int m_rotation;

    QPointer<QQmlEngine> m_qmlEngine;
    QPointer<QQuickView> m_fallbackView;
    QPointer<QObject> m_object;
    QPointer<QQuickWindow> m_activeWindow;
    QList<QMetaObject::Connection> m_activeWindowConnections;
    QDir m_workspace;
    WorkspaceOptions m_workspaceOptions;
    QPointer<UrlInterceptor> m_urlInterceptor;
    QPointer<Overlay> m_overlay;
    QPointer<ResourceMap> m_resourceMap;
    QTimer *m_delayReload;

    ContentPluginFactory* m_pluginFactory;
    ContentAdapterInterface* m_activePlugin;

    ContentAdapterInterface::Features m_quickFeatures;
};

Q_DECLARE_OPERATORS_FOR_FLAGS(LiveNodeEngine::WorkspaceOptions)
