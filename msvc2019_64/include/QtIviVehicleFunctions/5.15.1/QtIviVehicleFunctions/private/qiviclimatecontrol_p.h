/****************************************************************************
** Generated from 'QtIviVehicleFunctions.qface'
**
** Created by: The QFace generator (QtAS 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/


#ifndef QTIVIVEHICLEFUNCTIONS_QIVICLIMATECONTROLPRIVATE_H_
#define QTIVIVEHICLEFUNCTIONS_QIVICLIMATECONTROLPRIVATE_H_

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

class QIviClimateControl;

class QIviClimateControlPrivate : public QIviAbstractZonedFeaturePrivate
{
public:
    QIviClimateControlPrivate(const QString &interface, const QString &zone, QIviClimateControl *parent);

    static QIviClimateControlPrivate *get(QIviClimateControl *p);
    static const QIviClimateControlPrivate *get(const QIviClimateControl *p);
    QIviClimateControl *getParent();

    void clearToDefaults();

    void onAirConditioningEnabledChanged(bool airConditioningEnabled, const QString &zone);
    void onHeaterEnabledChanged(bool heaterEnabled, const QString &zone);
    void onFanSpeedLevelChanged(int fanSpeedLevel, const QString &zone);
    void onSteeringWheelHeaterChanged(int steeringWheelHeater, const QString &zone);
    void onTargetTemperatureChanged(qreal targetTemperature, const QString &zone);
    void onSeatCoolerChanged(int seatCooler, const QString &zone);
    void onSeatHeaterChanged(int seatHeater, const QString &zone);
    void onOutsideTemperatureChanged(int outsideTemperature, const QString &zone);
    void onOutsideTemperatureLabelChanged(const QString &outsideTemperatureLabel, const QString &zone);
    void onZoneSynchronizationEnabledChanged(bool zoneSynchronizationEnabled, const QString &zone);
    void onDefrostEnabledChanged(bool defrostEnabled, const QString &zone);
    void onRecirculationModeChanged(QtIviVehicleFunctionsModule::RecirculationMode recirculationMode, const QString &zone);
    void onRecirculationEnabledChanged(bool recirculationEnabled, const QString &zone);
    void onRecirculationSensitivityLevelChanged(int recirculationSensitivityLevel, const QString &zone);
    void onClimateModeChanged(QtIviVehicleFunctionsModule::ClimateMode climateMode, const QString &zone);
    void onAutomaticClimateFanIntensityLevelChanged(int automaticClimateFanIntensityLevel, const QString &zone);
    void onAirflowDirectionsChanged(QtIviVehicleFunctionsModule::AirflowDirections airflowDirections, const QString &zone);

    bool notify(const QByteArray &propertyName, const QVariant &value) override;

    QIviClimateControl * const q_ptr;
    bool m_airConditioningEnabled;
    bool m_heaterEnabled;
    int m_fanSpeedLevel;
    int m_steeringWheelHeater;
    qreal m_targetTemperature;
    int m_seatCooler;
    int m_seatHeater;
    int m_outsideTemperature;
    QString m_outsideTemperatureLabel;
    bool m_zoneSynchronizationEnabled;
    bool m_defrostEnabled;
    QtIviVehicleFunctionsModule::RecirculationMode m_recirculationMode;
    bool m_recirculationEnabled;
    int m_recirculationSensitivityLevel;
    QtIviVehicleFunctionsModule::ClimateMode m_climateMode;
    int m_automaticClimateFanIntensityLevel;
    QtIviVehicleFunctionsModule::AirflowDirections m_airflowDirections;

    Q_DECLARE_PUBLIC(QIviClimateControl)
};

QT_END_NAMESPACE

#endif // QTIVIVEHICLEFUNCTIONS_QIVICLIMATECONTROLPRIVATE_H_
