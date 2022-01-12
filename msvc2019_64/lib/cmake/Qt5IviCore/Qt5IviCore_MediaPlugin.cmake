
add_library(Qt5::MediaPlugin MODULE IMPORTED)


_populate_IviCore_plugin_properties(MediaPlugin RELEASE "qtivi/media_simulator.dll" TRUE)
_populate_IviCore_plugin_properties(MediaPlugin DEBUG "qtivi/media_simulatord.dll" TRUE)

list(APPEND Qt5IviCore_PLUGINS Qt5::MediaPlugin)
set_property(TARGET Qt5::IviCore APPEND PROPERTY QT_ALL_PLUGINS_qtivi Qt5::MediaPlugin)
set_property(TARGET Qt5::MediaPlugin PROPERTY QT_PLUGIN_TYPE "qtivi")
set_property(TARGET Qt5::MediaPlugin PROPERTY QT_PLUGIN_EXTENDS "Qt::IviMedia")
set_property(TARGET Qt5::MediaPlugin PROPERTY QT_PLUGIN_CLASS_NAME "MediaPlugin")
