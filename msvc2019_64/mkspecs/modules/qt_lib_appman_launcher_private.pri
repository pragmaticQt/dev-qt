QT.appman_launcher_private.VERSION = 5.15.1
QT.appman_launcher_private.name = QtAppManLauncher
QT.appman_launcher_private.module = Qt5AppManLauncher
QT.appman_launcher_private.libs = $$QT_MODULE_LIB_BASE
QT.appman_launcher_private.includes = $$QT_MODULE_INCLUDE_BASE $$QT_MODULE_INCLUDE_BASE/QtAppManLauncher $$QT_MODULE_INCLUDE_BASE/QtAppManLauncher/5.15.1 $$QT_MODULE_INCLUDE_BASE/QtAppManLauncher/5.15.1/QtAppManLauncher
QT.appman_launcher_private.frameworks =
QT.appman_launcher_private.bins = $$QT_MODULE_BIN_BASE
QT.appman_launcher_private.depends = qml dbus core_private quick gui gui_private quick_private
QT.appman_launcher_private.run_depends = appman_common_private appman_shared_main_private appman_application_private appman_notification_private appman_intent_client_private
QT.appman_launcher_private.uses =
QT.appman_launcher_private.module_config = v2 staticlib internal_module
QT.appman_launcher_private.DEFINES = QT_APPMAN_LAUNCHER_LIB
QT.appman_launcher_private.enabled_features =
QT.appman_launcher_private.disabled_features =
QT_CONFIG +=
QT_MODULES += appman_launcher
