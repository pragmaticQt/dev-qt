
add_library(Qt5::TunerPlugin MODULE IMPORTED)


_populate_IviCore_plugin_properties(TunerPlugin RELEASE "qtivi/tuner_simulator.dll" TRUE)
_populate_IviCore_plugin_properties(TunerPlugin DEBUG "qtivi/tuner_simulatord.dll" TRUE)

list(APPEND Qt5IviCore_PLUGINS Qt5::TunerPlugin)
set_property(TARGET Qt5::IviCore APPEND PROPERTY QT_ALL_PLUGINS_qtivi Qt5::TunerPlugin)
set_property(TARGET Qt5::TunerPlugin PROPERTY QT_PLUGIN_TYPE "qtivi")
set_property(TARGET Qt5::TunerPlugin PROPERTY QT_PLUGIN_EXTENDS "Qt::IviMedia")
set_property(TARGET Qt5::TunerPlugin PROPERTY QT_PLUGIN_CLASS_NAME "TunerPlugin")
