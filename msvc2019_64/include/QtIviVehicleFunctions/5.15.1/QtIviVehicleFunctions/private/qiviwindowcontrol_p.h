/****************************************************************************
** Generated from 'QtIviVehicleFunctions.qface'
**
** Created by: The QFace generator (QtAS 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/


#ifndef QTIVIVEHICLEFUNCTIONS_QIVIWINDOWCONTROLPRIVATE_H_
#define QTIVIVEHICLEFUNCTIONS_QIVIWINDOWCONTROLPRIVATE_H_

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail. This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include "qtivivehiclefunctionsmodule.h"

#include <QtIviCore/private/qiviabstractzonedfeature_p.h>
#include <QIviPagingModelInterface>

QT_BEGIN_NAMESPACE

class QIviWindowControl;

class QIviWindowControlPrivate : public QIviAbstractZonedFeaturePrivate
{
public:
    QIviWindowControlPrivate(const QString &interface, const QString &zone, QIviWindowControl *parent);

    static QIviWindowControlPrivate *get(QIviWindowControl *p);
    static const QIviWindowControlPrivate *get(const QIviWindowControl *p);
    QIviWindowControl *getParent();

    void clearToDefaults();

    void onHeaterModeChanged(QtIviVehicleFunctionsModule::HeaterMode heaterMode, const QString &zone);
    void onHeaterChanged(bool heater, const QString &zone);
    void onStateChanged(QtIviVehicleFunctionsModule::WindowState state, const QString &zone);
    void onBlindModeChanged(QtIviVehicleFunctionsModule::BlindMode blindMode, const QString &zone);
    void onBlindStateChanged(QtIviVehicleFunctionsModule::WindowState blindState, const QString &zone);

    bool notify(const QByteArray &propertyName, const QVariant &value) override;

    QIviWindowControl * const q_ptr;
    QtIviVehicleFunctionsModule::HeaterMode m_heaterMode;
    bool m_heater;
    QtIviVehicleFunctionsModule::WindowState m_state;
    QtIviVehicleFunctionsModule::BlindMode m_blindMode;
    QtIviVehicleFunctionsModule::WindowState m_blindState;

    Q_DECLARE_PUBLIC(QIviWindowControl)
};

QT_END_NAMESPACE

#endif // QTIVIVEHICLEFUNCTIONS_QIVIWINDOWCONTROLPRIVATE_H_
