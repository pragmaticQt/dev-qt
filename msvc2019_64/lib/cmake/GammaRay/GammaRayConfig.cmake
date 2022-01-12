
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was GammaRayConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

find_package(Qt5 5.15 NO_MODULE REQUIRED COMPONENTS Core Network)
find_package(Qt5 5.15 NO_MODULE COMPONENTS Widgets)

set_and_check(GammaRay_INCLUDE_DIRS "${PACKAGE_PREFIX_DIR}/include/gammaray")
list(APPEND GammaRay_INCLUDE_DIRS "${PACKAGE_PREFIX_DIR}/include/gammaray/..")

set(GAMMARAY_PLUGIN_INSTALL_DIR plugins/gammaray)
set(GAMMARAY_PLUGIN_VERSION 2.11)
set(GAMMARAY_PROBE_ABI qt5_15-MSVC-140-x86_64)
set(GAMMARAY_PROBE_PLUGIN_INSTALL_DIR plugins/gammaray/2.11/qt5_15-MSVC-140-x86_64)

set(GAMMARAY_BUILD_UI ON)
set(GAMMARAY_PROBE_ONLY_BUILD OFF)

set(GAMMARAY_STATIC_PROBE OFF)
set(GAMMARAY_LIBRARY_TYPE SHARED)
set(GAMMARAY_PLUGIN_TYPE MODULE)

if(NOT GAMMARAY_OUTPUT_PREFIX)
  set(GAMMARAY_OUTPUT_PREFIX ${PROJECT_BINARY_DIR})
endif()

include("${CMAKE_CURRENT_LIST_DIR}/GammaRayTarget.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/GammaRayMacros.cmake")
