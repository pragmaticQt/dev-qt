#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "gammaray_kitemmodels" for configuration "Release"
set_property(TARGET gammaray_kitemmodels APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(gammaray_kitemmodels PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/gammaray_kitemmodels-qt5_15-MSVC-140-x86_64.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/gammaray_kitemmodels-qt5_15-MSVC-140-x86_64.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gammaray_kitemmodels )
list(APPEND _IMPORT_CHECK_FILES_FOR_gammaray_kitemmodels "${_IMPORT_PREFIX}/lib/gammaray_kitemmodels-qt5_15-MSVC-140-x86_64.lib" "${_IMPORT_PREFIX}/bin/gammaray_kitemmodels-qt5_15-MSVC-140-x86_64.dll" )

# Import target "gammaray_common" for configuration "Release"
set_property(TARGET gammaray_common APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(gammaray_common PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/gammaray_common-qt5_15-MSVC-140-x86_64.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "Qt5::Network;Qt5::Gui;gammaray_kitemmodels"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/gammaray_common-qt5_15-MSVC-140-x86_64.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gammaray_common )
list(APPEND _IMPORT_CHECK_FILES_FOR_gammaray_common "${_IMPORT_PREFIX}/lib/gammaray_common-qt5_15-MSVC-140-x86_64.lib" "${_IMPORT_PREFIX}/bin/gammaray_common-qt5_15-MSVC-140-x86_64.dll" )

# Import target "gammaray_core" for configuration "Release"
set_property(TARGET gammaray_core APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(gammaray_core PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/gammaray_core-qt5_15-MSVC-140-x86_64.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "gammaray_kitemmodels;Qt5::Gui"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/gammaray_core-qt5_15-MSVC-140-x86_64.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gammaray_core )
list(APPEND _IMPORT_CHECK_FILES_FOR_gammaray_core "${_IMPORT_PREFIX}/lib/gammaray_core-qt5_15-MSVC-140-x86_64.lib" "${_IMPORT_PREFIX}/bin/gammaray_core-qt5_15-MSVC-140-x86_64.dll" )

# Import target "gammaray_launcher" for configuration "Release"
set_property(TARGET gammaray_launcher APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(gammaray_launcher PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/gammaray_launcher.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "gammaray_common;Qt5::Network;Qt5::Gui;Qt5::Widgets"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/gammaray_launcher.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gammaray_launcher )
list(APPEND _IMPORT_CHECK_FILES_FOR_gammaray_launcher "${_IMPORT_PREFIX}/lib/gammaray_launcher.lib" "${_IMPORT_PREFIX}/bin/gammaray_launcher.dll" )

# Import target "gammaray_launcher_ui" for configuration "Release"
set_property(TARGET gammaray_launcher_ui APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(gammaray_launcher_ui PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/gammaray_launcher_ui.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "Qt5::Core;Qt5::Concurrent;Qt5::Gui;Qt5::Widgets;Qt5::Network;gammaray_ui"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/gammaray_launcher_ui.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gammaray_launcher_ui )
list(APPEND _IMPORT_CHECK_FILES_FOR_gammaray_launcher_ui "${_IMPORT_PREFIX}/lib/gammaray_launcher_ui.lib" "${_IMPORT_PREFIX}/bin/gammaray_launcher_ui.dll" )

# Import target "gammaray_kuserfeedback" for configuration "Release"
set_property(TARGET gammaray_kuserfeedback APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(gammaray_kuserfeedback PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/gammaray_kuserfeedback.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "Qt5::Gui;Qt5::Network"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/gammaray_kuserfeedback.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gammaray_kuserfeedback )
list(APPEND _IMPORT_CHECK_FILES_FOR_gammaray_kuserfeedback "${_IMPORT_PREFIX}/lib/gammaray_kuserfeedback.lib" "${_IMPORT_PREFIX}/bin/gammaray_kuserfeedback.dll" )

# Import target "gammaray_ui" for configuration "Release"
set_property(TARGET gammaray_ui APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(gammaray_ui PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/gammaray_ui-qt5_15-MSVC-140-x86_64.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "gammaray_kitemmodels"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/gammaray_ui-qt5_15-MSVC-140-x86_64.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gammaray_ui )
list(APPEND _IMPORT_CHECK_FILES_FOR_gammaray_ui "${_IMPORT_PREFIX}/lib/gammaray_ui-qt5_15-MSVC-140-x86_64.lib" "${_IMPORT_PREFIX}/bin/gammaray_ui-qt5_15-MSVC-140-x86_64.dll" )

# Import target "gammaray_client" for configuration "Release"
set_property(TARGET gammaray_client APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(gammaray_client PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/gammaray_client.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "gammaray_ui;gammaray_common;Qt5::Gui;Qt5::Widgets;Qt5::Network"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/gammaray_client.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gammaray_client )
list(APPEND _IMPORT_CHECK_FILES_FOR_gammaray_client "${_IMPORT_PREFIX}/lib/gammaray_client.lib" "${_IMPORT_PREFIX}/bin/gammaray_client.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
