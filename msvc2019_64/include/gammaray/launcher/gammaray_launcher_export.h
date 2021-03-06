
#ifndef GAMMARAY_LAUNCHER_EXPORT_H
#define GAMMARAY_LAUNCHER_EXPORT_H

#ifdef GAMMARAY_LAUNCHER_STATIC_DEFINE
#  define GAMMARAY_LAUNCHER_EXPORT
#  define GAMMARAY_LAUNCHER_NO_EXPORT
#else
#  ifndef GAMMARAY_LAUNCHER_EXPORT
#    ifdef gammaray_launcher_EXPORTS
        /* We are building this library */
#      define GAMMARAY_LAUNCHER_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define GAMMARAY_LAUNCHER_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef GAMMARAY_LAUNCHER_NO_EXPORT
#    define GAMMARAY_LAUNCHER_NO_EXPORT 
#  endif
#endif

#ifndef GAMMARAY_LAUNCHER_DEPRECATED
#  define GAMMARAY_LAUNCHER_DEPRECATED __declspec(deprecated)
#endif

#ifndef GAMMARAY_LAUNCHER_DEPRECATED_EXPORT
#  define GAMMARAY_LAUNCHER_DEPRECATED_EXPORT GAMMARAY_LAUNCHER_EXPORT GAMMARAY_LAUNCHER_DEPRECATED
#endif

#ifndef GAMMARAY_LAUNCHER_DEPRECATED_NO_EXPORT
#  define GAMMARAY_LAUNCHER_DEPRECATED_NO_EXPORT GAMMARAY_LAUNCHER_NO_EXPORT GAMMARAY_LAUNCHER_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef GAMMARAY_LAUNCHER_NO_DEPRECATED
#    define GAMMARAY_LAUNCHER_NO_DEPRECATED
#  endif
#endif

#endif /* GAMMARAY_LAUNCHER_EXPORT_H */
