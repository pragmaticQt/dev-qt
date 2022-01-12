/****************************************************************************
** Generated from 'QtIviVehicleFunctions.qface'
**
** Created by: The QFace generator (QtAS 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/


#ifndef QTIVIVEHICLEFUNCTIONS_QIVICLIMATECONTROL_H_
#define QTIVIVEHICLEFUNCTIONS_QIVICLIMATECONTROL_H_

#include <QtIviVehicleFunctions/qtivivehiclefunctionsmodule.h>


#include <QtIviCore/QIviAbstractZonedFeature>
#include <QtIviCore/QIviPendingReply>
#include <QtIviCore/QIviPagingModel>

QT_BEGIN_NAMESPACE

class QIviClimateControlPrivate;
class QIviClimateControlBackendInterface;

class Q_QTIVIVEHICLEFUNCTIONS_EXPORT QIviClimateControl : public QIviAbstractZonedFeature
{
    Q_OBJECT
    Q_PROPERTY(bool airConditioningEnabled READ isAirConditioningEnabled WRITE setAirConditioningEnabled NOTIFY airConditioningEnabledChanged)
    Q_PROPERTY(bool heaterEnabled READ isHeaterEnabled WRITE setHeaterEnabled NOTIFY heaterEnabledChanged)
    Q_PROPERTY(int fanSpeedLevel READ fanSpeedLevel WRITE setFanSpeedLevel NOTIFY fanSpeedLevelChanged)
    Q_PROPERTY(int steeringWheelHeater READ steeringWheelHeater WRITE setSteeringWheelHeater NOTIFY steeringWheelHeaterChanged)
    Q_PROPERTY(qreal targetTemperature READ targetTemperature WRITE setTargetTemperature NOTIFY targetTemperatureChanged)
    Q_PROPERTY(int seatCooler READ seatCooler WRITE setSeatCooler NOTIFY seatCoolerChanged)
    Q_PROPERTY(int seatHeater READ seatHeater WRITE setSeatHeater NOTIFY seatHeaterChanged)
    Q_PROPERTY(int outsideTemperature READ outsideTemperature WRITE setOutsideTemperature NOTIFY outsideTemperatureChanged)
    Q_PROPERTY(QString outsideTemperatureLabel READ outsideTemperatureLabel WRITE setOutsideTemperatureLabel NOTIFY outsideTemperatureLabelChanged)
    Q_PROPERTY(bool zoneSynchronizationEnabled READ isZoneSynchronizationEnabled WRITE setZoneSynchronizationEnabled NOTIFY zoneSynchronizationEnabledChanged)
    Q_PROPERTY(bool defrostEnabled READ isDefrostEnabled WRITE setDefrostEnabled NOTIFY defrostEnabledChanged)
    Q_PROPERTY(QtIviVehicleFunctionsModule::RecirculationMode recirculationMode READ recirculationMode WRITE setRecirculationMode NOTIFY recirculationModeChanged)
    Q_PROPERTY(bool recirculationEnabled READ isRecirculationEnabled WRITE setRecirculationEnabled NOTIFY recirculationEnabledChanged)
    Q_PROPERTY(int recirculationSensitivityLevel READ recirculationSensitivityLevel WRITE setRecirculationSensitivityLevel NOTIFY recirculationSensitivityLevelChanged)
    Q_PROPERTY(QtIviVehicleFunctionsModule::ClimateMode climateMode READ climateMode WRITE setClimateMode NOTIFY climateModeChanged)
    Q_PROPERTY(int automaticClimateFanIntensityLevel READ automaticClimateFanIntensityLevel WRITE setAutomaticClimateFanIntensityLevel NOTIFY automaticClimateFanIntensityLevelChanged)
    Q_PROPERTY(QtIviVehicleFunctionsModule::AirflowDirections airflowDirections READ airflowDirections WRITE setAirflowDirections NOTIFY airflowDirectionsChanged)

public:
    explicit QIviClimateControl(const QString &zone = QString(), QObject *parent = nullptr);
    ~QIviClimateControl();

    static void registerQmlTypes(const QString& uri, int majorVersion=1, int minorVersion=0);

    bool isAirConditioningEnabled() const;
    bool isHeaterEnabled() const;
    int fanSpeedLevel() const;
    int steeringWheelHeater() const;
    qreal targetTemperature() const;
    int seatCooler() const;
    int seatHeater() const;
    int outsideTemperature() const;
    QString outsideTemperatureLabel() const;
    bool isZoneSynchronizationEnabled() const;
    bool isDefrostEnabled() const;
    QtIviVehicleFunctionsModule::RecirculationMode recirculationMode() const;
    bool isRecirculationEnabled() const;
    int recirculationSensitivityLevel() const;
    QtIviVehicleFunctionsModule::ClimateMode climateMode() const;
    int automaticClimateFanIntensityLevel() const;
    QtIviVehicleFunctionsModule::AirflowDirections airflowDirections() const;

public Q_SLOTS:
    void setAirConditioningEnabled(bool airConditioningEnabled);
    void setHeaterEnabled(bool heaterEnabled);
    void setFanSpeedLevel(int fanSpeedLevel);
    void setSteeringWheelHeater(int steeringWheelHeater);
    void setTargetTemperature(qreal targetTemperature);
    void setSeatCooler(int seatCooler);
    void setSeatHeater(int seatHeater);
    void setOutsideTemperature(int outsideTemperature);
    void setOutsideTemperatureLabel(const QString &outsideTemperatureLabel);
    void setZoneSynchronizationEnabled(bool zoneSynchronizationEnabled);
    void setDefrostEnabled(bool defrostEnabled);
    void setRecirculationMode(QtIviVehicleFunctionsModule::RecirculationMode recirculationMode);
    void setRecirculationEnabled(bool recirculationEnabled);
    void setRecirculationSensitivityLevel(int recirculationSensitivityLevel);
    void setClimateMode(QtIviVehicleFunctionsModule::ClimateMode climateMode);
    void setAutomaticClimateFanIntensityLevel(int automaticClimateFanIntensityLevel);
    void setAirflowDirections(QtIviVehicleFunctionsModule::AirflowDirections airflowDirections);

Q_SIGNALS:
    void airConditioningEnabledChanged(bool airConditioningEnabled);
    void heaterEnabledChanged(bool heaterEnabled);
    void fanSpeedLevelChanged(int fanSpeedLevel);
    void steeringWheelHeaterChanged(int steeringWheelHeater);
    void targetTemperatureChanged(qreal targetTemperature);
    void seatCoolerChanged(int seatCooler);
    void seatHeaterChanged(int seatHeater);
    void outsideTemperatureChanged(int outsideTemperature);
    void outsideTemperatureLabelChanged(const QString &outsideTemperatureLabel);
    void zoneSynchronizationEnabledChanged(bool zoneSynchronizationEnabled);
    void defrostEnabledChanged(bool defrostEnabled);
    void recirculationModeChanged(QtIviVehicleFunctionsModule::RecirculationMode recirculationMode);
    void recirculationEnabledChanged(bool recirculationEnabled);
    void recirculationSensitivityLevelChanged(int recirculationSensitivityLevel);
    void climateModeChanged(QtIviVehicleFunctionsModule::ClimateMode climateMode);
    void automaticClimateFanIntensityLevelChanged(int automaticClimateFanIntensityLevel);
    void airflowDirectionsChanged(QtIviVehicleFunctionsModule::AirflowDirections airflowDirections);

protected:
    QIviAbstractZonedFeature *createZoneFeature(const QString &zone) Q_DECL_OVERRIDE;
    QIviClimateControlBackendInterface *qiviclimatecontrolBackend() const;

    void connectToServiceObject(QIviServiceObject *service) Q_DECL_OVERRIDE;
    void clearServiceObject() Q_DECL_OVERRIDE;

private:
    Q_PRIVATE_SLOT(d_func(), void onAirConditioningEnabledChanged(bool airConditioningEnabled, const QString &zone))
    Q_PRIVATE_SLOT(d_func(), void onHeaterEnabledChanged(bool heaterEnabled, const QString &zone))
    Q_PRIVATE_SLOT(d_func(), void onFanSpeedLevelChanged(int fanSpeedLevel, const QString &zone))
    Q_PRIVATE_SLOT(d_func(), void onSteeringWheelHeaterChanged(int steeringWheelHeater, const QString &zone))
    Q_PRIVATE_SLOT(d_func(), void onTargetTemperatureChanged(qreal targetTemperature, const QString &zone))
    Q_PRIVATE_SLOT(d_func(), void onSeatCoolerChanged(int seatCooler, const QString &zone))
    Q_PRIVATE_SLOT(d_func(), void onSeatHeaterChanged(int seatHeater, const QString &zone))
    Q_PRIVATE_SLOT(d_func(), void onOutsideTemperatureChanged(int outsideTemperature, const QString &zone))
    Q_PRIVATE_SLOT(d_func(), void onOutsideTemperatureLabelChanged(const QString &outsideTemperatureLabel, const QString &zone))
    Q_PRIVATE_SLOT(d_func(), void onZoneSynchronizationEnabledChanged(bool zoneSynchronizationEnabled, const QString &zone))
    Q_PRIVATE_SLOT(d_func(), void onDefrostEnabledChanged(bool defrostEnabled, const QString &zone))
    Q_PRIVATE_SLOT(d_func(), void onRecirculationModeChanged(QtIviVehicleFunctionsModule::RecirculationMode recirculationMode, const QString &zone))
    Q_PRIVATE_SLOT(d_func(), void onRecirculationEnabledChanged(bool recirculationEnabled, const QString &zone))
    Q_PRIVATE_SLOT(d_func(), void onRecirculationSensitivityLevelChanged(int recirculationSensitivityLevel, const QString &zone))
    Q_PRIVATE_SLOT(d_func(), void onClimateModeChanged(QtIviVehicleFunctionsModule::ClimateMode climateMode, const QString &zone))
    Q_PRIVATE_SLOT(d_func(), void onAutomaticClimateFanIntensityLevelChanged(int automaticClimateFanIntensityLevel, const QString &zone))
    Q_PRIVATE_SLOT(d_func(), void onAirflowDirectionsChanged(QtIviVehicleFunctionsModule::AirflowDirections airflowDirections, const QString &zone))
    Q_DECLARE_PRIVATE(QIviClimateControl)
};

QT_END_NAMESPACE

#endif // QTIVIVEHICLEFUNCTIONS_QIVICLIMATECONTROL_H_
