/****************************************************************************
** Generated from 'QtIviVehicleFunctions.qface'
**
** Created by: The QFace generator (QtAS 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/


#ifndef QTIVIVEHICLEFUNCTIONS_QIVIWINDOWCONTROL_H_
#define QTIVIVEHICLEFUNCTIONS_QIVIWINDOWCONTROL_H_

#include <QtIviVehicleFunctions/qtivivehiclefunctionsmodule.h>


#include <QtIviCore/QIviAbstractZonedFeature>
#include <QtIviCore/QIviPendingReply>
#include <QtIviCore/QIviPagingModel>

QT_BEGIN_NAMESPACE

class QIviWindowControlPrivate;
class QIviWindowControlBackendInterface;

class Q_QTIVIVEHICLEFUNCTIONS_EXPORT QIviWindowControl : public QIviAbstractZonedFeature
{
    Q_OBJECT
    Q_PROPERTY(QtIviVehicleFunctionsModule::HeaterMode heaterMode READ heaterMode WRITE setHeaterMode NOTIFY heaterModeChanged)
    Q_PROPERTY(bool heater READ heater NOTIFY heaterChanged)
    Q_PROPERTY(QtIviVehicleFunctionsModule::WindowState state READ state NOTIFY stateChanged)
    Q_PROPERTY(QtIviVehicleFunctionsModule::BlindMode blindMode READ blindMode WRITE setBlindMode NOTIFY blindModeChanged)
    Q_PROPERTY(QtIviVehicleFunctionsModule::WindowState blindState READ blindState NOTIFY blindStateChanged)

public:
    explicit QIviWindowControl(const QString &zone = QString(), QObject *parent = nullptr);
    ~QIviWindowControl();

    static void registerQmlTypes(const QString& uri, int majorVersion=1, int minorVersion=0);

    QtIviVehicleFunctionsModule::HeaterMode heaterMode() const;
    bool heater() const;
    QtIviVehicleFunctionsModule::WindowState state() const;
    QtIviVehicleFunctionsModule::BlindMode blindMode() const;
    QtIviVehicleFunctionsModule::WindowState blindState() const;

public Q_SLOTS:
    QIviPendingReply<void> open();
    QIviPendingReply<void> close();
    void setHeaterMode(QtIviVehicleFunctionsModule::HeaterMode heaterMode);
    void setBlindMode(QtIviVehicleFunctionsModule::BlindMode blindMode);

Q_SIGNALS:
    void heaterModeChanged(QtIviVehicleFunctionsModule::HeaterMode heaterMode);
    void heaterChanged(bool heater);
    void stateChanged(QtIviVehicleFunctionsModule::WindowState state);
    void blindModeChanged(QtIviVehicleFunctionsModule::BlindMode blindMode);
    void blindStateChanged(QtIviVehicleFunctionsModule::WindowState blindState);

protected:
    QIviAbstractZonedFeature *createZoneFeature(const QString &zone) Q_DECL_OVERRIDE;
    QIviWindowControlBackendInterface *qiviwindowcontrolBackend() const;

    void connectToServiceObject(QIviServiceObject *service) Q_DECL_OVERRIDE;
    void clearServiceObject() Q_DECL_OVERRIDE;

private:
    Q_PRIVATE_SLOT(d_func(), void onHeaterModeChanged(QtIviVehicleFunctionsModule::HeaterMode heaterMode, const QString &zone))
    Q_PRIVATE_SLOT(d_func(), void onHeaterChanged(bool heater, const QString &zone))
    Q_PRIVATE_SLOT(d_func(), void onStateChanged(QtIviVehicleFunctionsModule::WindowState state, const QString &zone))
    Q_PRIVATE_SLOT(d_func(), void onBlindModeChanged(QtIviVehicleFunctionsModule::BlindMode blindMode, const QString &zone))
    Q_PRIVATE_SLOT(d_func(), void onBlindStateChanged(QtIviVehicleFunctionsModule::WindowState blindState, const QString &zone))
    Q_DECLARE_PRIVATE(QIviWindowControl)
};

QT_END_NAMESPACE

#endif // QTIVIVEHICLEFUNCTIONS_QIVIWINDOWCONTROL_H_
