/****************************************************************************
** Generated from 'QtIviVehicleFunctions.qface'
**
** Created by: The QFace generator (QtAS 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/


#ifndef QTIVIVEHICLEFUNCTIONSMODULE_H_
#define QTIVIVEHICLEFUNCTIONSMODULE_H_

#include <QtIviVehicleFunctions/qtivivehiclefunctionsglobal.h>


#include <QObject>

QT_BEGIN_NAMESPACE

class Q_QTIVIVEHICLEFUNCTIONS_EXPORT QtIviVehicleFunctionsModule : public QObject
{
    Q_OBJECT

public:
    QtIviVehicleFunctionsModule(QObject *parent=nullptr);

    enum AirflowDirection {
        Windshield = 1,
        Dashboard = 2,
        Floor = 4,
    };
    Q_DECLARE_FLAGS(AirflowDirections, AirflowDirection)
    Q_FLAG(AirflowDirections)
    static AirflowDirections toAirflowDirections(quint32 v, bool *ok);
    enum RecirculationMode {
        RecirculationOff = 0,
        RecirculationOn = 1,
        AutoRecirculation = 2,
    };
    Q_ENUM(RecirculationMode)
    static RecirculationMode toRecirculationMode(quint32 v, bool *ok);
    enum ClimateMode {
        ClimateOff = 0,
        ClimateOn = 1,
        AutoClimate = 2,
    };
    Q_ENUM(ClimateMode)
    static ClimateMode toClimateMode(quint32 v, bool *ok);
    enum HeaterMode {
        HeaterOn = 0,
        HeaterOff = 1,
        AutoHeater = 2,
    };
    Q_ENUM(HeaterMode)
    static HeaterMode toHeaterMode(quint32 v, bool *ok);
    enum BlindMode {
        BlindOpen = 0,
        BlindClosed = 1,
        AutoBlind = 2,
    };
    Q_ENUM(BlindMode)
    static BlindMode toBlindMode(quint32 v, bool *ok);
    enum WindowState {
        FullyOpen = 0,
        Open = 1,
        Closed = 2,
    };
    Q_ENUM(WindowState)
    static WindowState toWindowState(quint32 v, bool *ok);

    static void registerTypes();
    static void registerQmlTypes(const QString& uri = QStringLiteral("QtIvi.VehicleFunctions"), int majorVersion = 1, int minorVersion = 0);
};

Q_QTIVIVEHICLEFUNCTIONS_EXPORT QDataStream &operator<<(QDataStream &out, QtIviVehicleFunctionsModule::AirflowDirections var);
Q_QTIVIVEHICLEFUNCTIONS_EXPORT QDataStream &operator>>(QDataStream &in, QtIviVehicleFunctionsModule::AirflowDirections &var);
Q_QTIVIVEHICLEFUNCTIONS_EXPORT QDataStream &operator<<(QDataStream &out, QtIviVehicleFunctionsModule::RecirculationMode var);
Q_QTIVIVEHICLEFUNCTIONS_EXPORT QDataStream &operator>>(QDataStream &in, QtIviVehicleFunctionsModule::RecirculationMode &var);
Q_QTIVIVEHICLEFUNCTIONS_EXPORT QDataStream &operator<<(QDataStream &out, QtIviVehicleFunctionsModule::ClimateMode var);
Q_QTIVIVEHICLEFUNCTIONS_EXPORT QDataStream &operator>>(QDataStream &in, QtIviVehicleFunctionsModule::ClimateMode &var);
Q_QTIVIVEHICLEFUNCTIONS_EXPORT QDataStream &operator<<(QDataStream &out, QtIviVehicleFunctionsModule::HeaterMode var);
Q_QTIVIVEHICLEFUNCTIONS_EXPORT QDataStream &operator>>(QDataStream &in, QtIviVehicleFunctionsModule::HeaterMode &var);
Q_QTIVIVEHICLEFUNCTIONS_EXPORT QDataStream &operator<<(QDataStream &out, QtIviVehicleFunctionsModule::BlindMode var);
Q_QTIVIVEHICLEFUNCTIONS_EXPORT QDataStream &operator>>(QDataStream &in, QtIviVehicleFunctionsModule::BlindMode &var);
Q_QTIVIVEHICLEFUNCTIONS_EXPORT QDataStream &operator<<(QDataStream &out, QtIviVehicleFunctionsModule::WindowState var);
Q_QTIVIVEHICLEFUNCTIONS_EXPORT QDataStream &operator>>(QDataStream &in, QtIviVehicleFunctionsModule::WindowState &var);

QT_END_NAMESPACE

#endif // QTIVIVEHICLEFUNCTIONSMODULE_H_
