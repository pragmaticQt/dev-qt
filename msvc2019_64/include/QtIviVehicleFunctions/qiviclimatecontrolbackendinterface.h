/****************************************************************************
** Generated from 'QtIviVehicleFunctions.qface'
**
** Created by: The QFace generator (QtAS 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/


#ifndef QTIVIVEHICLEFUNCTIONS_QIVICLIMATECONTROLBACKENDINTERFACE_H_
#define QTIVIVEHICLEFUNCTIONS_QIVICLIMATECONTROLBACKENDINTERFACE_H_

#include <QtIviVehicleFunctions/qtivivehiclefunctionsmodule.h>


#include <QtIviCore/QIviZonedFeatureInterface>
#include <QtIviCore/QIviPendingReply>
#include <QtIviCore/QIviPagingModelInterface>

QT_BEGIN_NAMESPACE

class Q_QTIVIVEHICLEFUNCTIONS_EXPORT QIviClimateControlBackendInterface : public QIviZonedFeatureInterface
{
    Q_OBJECT

public:
    explicit QIviClimateControlBackendInterface(QObject *parent = nullptr);
    ~QIviClimateControlBackendInterface();

    virtual void setAirConditioningEnabled(bool airConditioningEnabled, const QString &zone) = 0;
    virtual void setHeaterEnabled(bool heaterEnabled, const QString &zone) = 0;
    virtual void setFanSpeedLevel(int fanSpeedLevel, const QString &zone) = 0;
    virtual void setSteeringWheelHeater(int steeringWheelHeater, const QString &zone) = 0;
    virtual void setTargetTemperature(qreal targetTemperature, const QString &zone) = 0;
    virtual void setSeatCooler(int seatCooler, const QString &zone) = 0;
    virtual void setSeatHeater(int seatHeater, const QString &zone) = 0;
    virtual void setOutsideTemperature(int outsideTemperature, const QString &zone) = 0;
    virtual void setOutsideTemperatureLabel(const QString &outsideTemperatureLabel, const QString &zone) = 0;
    virtual void setZoneSynchronizationEnabled(bool zoneSynchronizationEnabled, const QString &zone) = 0;
    virtual void setDefrostEnabled(bool defrostEnabled, const QString &zone) = 0;
    virtual void setRecirculationMode(QtIviVehicleFunctionsModule::RecirculationMode recirculationMode, const QString &zone) = 0;
    virtual void setRecirculationEnabled(bool recirculationEnabled, const QString &zone) = 0;
    virtual void setRecirculationSensitivityLevel(int recirculationSensitivityLevel, const QString &zone) = 0;
    virtual void setClimateMode(QtIviVehicleFunctionsModule::ClimateMode climateMode, const QString &zone) = 0;
    virtual void setAutomaticClimateFanIntensityLevel(int automaticClimateFanIntensityLevel, const QString &zone) = 0;
    virtual void setAirflowDirections(QtIviVehicleFunctionsModule::AirflowDirections airflowDirections, const QString &zone) = 0;

Q_SIGNALS:
    void airConditioningEnabledChanged(bool airConditioningEnabled=bool(false), const QString &zone=QString());
    void heaterEnabledChanged(bool heaterEnabled=bool(false), const QString &zone=QString());
    void fanSpeedLevelChanged(int fanSpeedLevel=int(0), const QString &zone=QString());
    void steeringWheelHeaterChanged(int steeringWheelHeater=int(0), const QString &zone=QString());
    void targetTemperatureChanged(qreal targetTemperature=qreal(), const QString &zone=QString());
    void seatCoolerChanged(int seatCooler=int(0), const QString &zone=QString());
    void seatHeaterChanged(int seatHeater=int(0), const QString &zone=QString());
    void outsideTemperatureChanged(int outsideTemperature=int(0), const QString &zone=QString());
    void outsideTemperatureLabelChanged(const QString &outsideTemperatureLabel=QString(), const QString &zone=QString());
    void zoneSynchronizationEnabledChanged(bool zoneSynchronizationEnabled=bool(false), const QString &zone=QString());
    void defrostEnabledChanged(bool defrostEnabled=bool(false), const QString &zone=QString());
    void recirculationModeChanged(QtIviVehicleFunctionsModule::RecirculationMode recirculationMode=QtIviVehicleFunctionsModule::RecirculationOff, const QString &zone=QString());
    void recirculationEnabledChanged(bool recirculationEnabled=bool(false), const QString &zone=QString());
    void recirculationSensitivityLevelChanged(int recirculationSensitivityLevel=int(0), const QString &zone=QString());
    void climateModeChanged(QtIviVehicleFunctionsModule::ClimateMode climateMode=QtIviVehicleFunctionsModule::ClimateOff, const QString &zone=QString());
    void automaticClimateFanIntensityLevelChanged(int automaticClimateFanIntensityLevel=int(0), const QString &zone=QString());
    void airflowDirectionsChanged(QtIviVehicleFunctionsModule::AirflowDirections airflowDirections=QtIviVehicleFunctionsModule::AirflowDirections(), const QString &zone=QString());
};

#define QtIviVehicleFunctions_QIviClimateControl_iid ("org.qt-project.qtivi.ClimateControl/1.0")

QT_END_NAMESPACE

#endif // QTIVIVEHICLEFUNCTIONS_QIVICLIMATECONTROLBACKENDINTERFACE_H_
