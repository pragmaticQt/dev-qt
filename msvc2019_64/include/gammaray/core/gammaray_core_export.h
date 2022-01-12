
#ifndef GAMMARAY_CORE_EXPORT_H
#define GAMMARAY_CORE_EXPORT_H

#ifdef GAMMARAY_CORE_STATIC_DEFINE
#  define GAMMARAY_CORE_EXPORT
#  define GAMMARAY_CORE_NO_EXPORT
#else
#  ifndef GAMMARAY_CORE_EXPORT
#    ifdef gammaray_core_EXPORTS
        /* We are building this library */
#      define GAMMARAY_CORE_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define GAMMARAY_CORE_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef GAMMARAY_CORE_NO_EXPORT
#    define GAMMARAY_CORE_NO_EXPORT 
#  endif
#endif

#ifndef GAMMARAY_CORE_DEPRECATED
#  define GAMMARAY_CORE_DEPRECATED __declspec(deprecated)
#endif

#ifndef GAMMARAY_CORE_DEPRECATED_EXPORT
#  define GAMMARAY_CORE_DEPRECATED_EXPORT GAMMARAY_CORE_EXPORT GAMMARAY_CORE_DEPRECATED
#endif

#ifndef GAMMARAY_CORE_DEPRECATED_NO_EXPORT
#  define GAMMARAY_CORE_DEPRECATED_NO_EXPORT GAMMARAY_CORE_NO_EXPORT GAMMARAY_CORE_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef GAMMARAY_CORE_NO_DEPRECATED
#    define GAMMARAY_CORE_NO_DEPRECATED
#  endif
#endif

#endif /* GAMMARAY_CORE_EXPORT_H */
