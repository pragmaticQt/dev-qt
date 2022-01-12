
#ifndef GAMMARAY_UI_EXPORT_H
#define GAMMARAY_UI_EXPORT_H

#ifdef GAMMARAY_UI_STATIC_DEFINE
#  define GAMMARAY_UI_EXPORT
#  define GAMMARAY_UI_NO_EXPORT
#else
#  ifndef GAMMARAY_UI_EXPORT
#    ifdef gammaray_ui_EXPORTS
        /* We are building this library */
#      define GAMMARAY_UI_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define GAMMARAY_UI_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef GAMMARAY_UI_NO_EXPORT
#    define GAMMARAY_UI_NO_EXPORT 
#  endif
#endif

#ifndef GAMMARAY_UI_DEPRECATED
#  define GAMMARAY_UI_DEPRECATED __declspec(deprecated)
#endif

#ifndef GAMMARAY_UI_DEPRECATED_EXPORT
#  define GAMMARAY_UI_DEPRECATED_EXPORT GAMMARAY_UI_EXPORT GAMMARAY_UI_DEPRECATED
#endif

#ifndef GAMMARAY_UI_DEPRECATED_NO_EXPORT
#  define GAMMARAY_UI_DEPRECATED_NO_EXPORT GAMMARAY_UI_NO_EXPORT GAMMARAY_UI_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef GAMMARAY_UI_NO_DEPRECATED
#    define GAMMARAY_UI_NO_DEPRECATED
#  endif
#endif

#endif /* GAMMARAY_UI_EXPORT_H */
