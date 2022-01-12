
add_library(Qt5::MediaQtROPlugin MODULE IMPORTED)


_populate_IviCore_plugin_properties(MediaQtROPlugin RELEASE "qtivi/media_qtro.dll" TRUE)
_populate_IviCore_plugin_properties(MediaQtROPlugin DEBUG "qtivi/media_qtrod.dll" TRUE)

list(APPEND Qt5IviCore_PLUGINS Qt5::MediaQtROPlugin)
set_property(TARGET Qt5::IviCore APPEND PROPERTY QT_ALL_PLUGINS_qtivi Qt5::MediaQtROPlugin)
set_property(TARGET Qt5::MediaQtROPlugin PROPERTY QT_PLUGIN_TYPE "qtivi")
set_property(TARGET Qt5::MediaQtROPlugin PROPERTY QT_PLUGIN_EXTENDS "Qt::IviMedia")
set_property(TARGET Qt5::MediaQtROPlugin PROPERTY QT_PLUGIN_CLASS_NAME "MediaQtROPlugin")
