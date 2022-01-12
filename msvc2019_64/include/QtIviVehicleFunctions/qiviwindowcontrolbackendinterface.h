/****************************************************************************
** Generated from 'QtIviVehicleFunctions.qface'
**
** Created by: The QFace generator (QtAS 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/


#ifndef QTIVIVEHICLEFUNCTIONS_QIVIWINDOWCONTROLBACKENDINTERFACE_H_
#define QTIVIVEHICLEFUNCTIONS_QIVIWINDOWCONTROLBACKENDINTERFACE_H_

#include <QtIviVehicleFunctions/qtivivehiclefunctionsmodule.h>


#include <QtIviCore/QIviZonedFeatureInterface>
#include <QtIviCore/QIviPendingReply>
#include <QtIviCore/QIviPagingModelInterface>

QT_BEGIN_NAMESPACE

class Q_QTIVIVEHICLEFUNCTIONS_EXPORT QIviWindowControlBackendInterface : public QIviZonedFeatureInterface
{
    Q_OBJECT

public:
    explicit QIviWindowControlBackendInterface(QObject *parent = nullptr);
    ~QIviWindowControlBackendInterface();

    virtual void setHeaterMode(QtIviVehicleFunctionsModule::HeaterMode heaterMode, const QString &zone) = 0;
    virtual void setBlindMode(QtIviVehicleFunctionsModule::BlindMode blindMode, const QString &zone) = 0;
    virtual QIviPendingReply<void> open(const QString &zone) = 0;
    virtual QIviPendingReply<void> close(const QString &zone) = 0;

Q_SIGNALS:
    void heaterModeChanged(QtIviVehicleFunctionsModule::HeaterMode heaterMode=QtIviVehicleFunctionsModule::HeaterOn, const QString &zone=QString());
    void heaterChanged(bool heater=bool(false), const QString &zone=QString());
    void stateChanged(QtIviVehicleFunctionsModule::WindowState state=QtIviVehicleFunctionsModule::FullyOpen, const QString &zone=QString());
    void blindModeChanged(QtIviVehicleFunctionsModule::BlindMode blindMode=QtIviVehicleFunctionsModule::BlindOpen, const QString &zone=QString());
    void blindStateChanged(QtIviVehicleFunctionsModule::WindowState blindState=QtIviVehicleFunctionsModule::FullyOpen, const QString &zone=QString());
};

#define QtIviVehicleFunctions_QIviWindowControl_iid ("org.qt-project.qtivi.WindowControl/1.0")

QT_END_NAMESPACE

#endif // QTIVIVEHICLEFUNCTIONS_QIVIWINDOWCONTROLBACKENDINTERFACE_H_
