
add_library(Qt5::QtIviVehicleFunctionsQtROPlugin MODULE IMPORTED)


_populate_IviCore_plugin_properties(QtIviVehicleFunctionsQtROPlugin RELEASE "qtivi/vehiclefunction_qtro.dll" TRUE)
_populate_IviCore_plugin_properties(QtIviVehicleFunctionsQtROPlugin DEBUG "qtivi/vehiclefunction_qtrod.dll" TRUE)

list(APPEND Qt5IviCore_PLUGINS Qt5::QtIviVehicleFunctionsQtROPlugin)
set_property(TARGET Qt5::IviCore APPEND PROPERTY QT_ALL_PLUGINS_qtivi Qt5::QtIviVehicleFunctionsQtROPlugin)
set_property(TARGET Qt5::QtIviVehicleFunctionsQtROPlugin PROPERTY QT_PLUGIN_TYPE "qtivi")
set_property(TARGET Qt5::QtIviVehicleFunctionsQtROPlugin PROPERTY QT_PLUGIN_EXTENDS "Qt::IviVehicleFunctions")
set_property(TARGET Qt5::QtIviVehicleFunctionsQtROPlugin PROPERTY QT_PLUGIN_CLASS_NAME "QtIviVehicleFunctionsQtROPlugin")
