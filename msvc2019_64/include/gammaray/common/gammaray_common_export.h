
#ifndef GAMMARAY_COMMON_EXPORT_H
#define GAMMARAY_COMMON_EXPORT_H

#ifdef GAMMARAY_COMMON_STATIC_DEFINE
#  define GAMMARAY_COMMON_EXPORT
#  define GAMMARAY_COMMON_NO_EXPORT
#else
#  ifndef GAMMARAY_COMMON_EXPORT
#    ifdef gammaray_common_EXPORTS
        /* We are building this library */
#      define GAMMARAY_COMMON_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define GAMMARAY_COMMON_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef GAMMARAY_COMMON_NO_EXPORT
#    define GAMMARAY_COMMON_NO_EXPORT 
#  endif
#endif

#ifndef GAMMARAY_COMMON_DEPRECATED
#  define GAMMARAY_COMMON_DEPRECATED __declspec(deprecated)
#endif

#ifndef GAMMARAY_COMMON_DEPRECATED_EXPORT
#  define GAMMARAY_COMMON_DEPRECATED_EXPORT GAMMARAY_COMMON_EXPORT GAMMARAY_COMMON_DEPRECATED
#endif

#ifndef GAMMARAY_COMMON_DEPRECATED_NO_EXPORT
#  define GAMMARAY_COMMON_DEPRECATED_NO_EXPORT GAMMARAY_COMMON_NO_EXPORT GAMMARAY_COMMON_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef GAMMARAY_COMMON_NO_DEPRECATED
#    define GAMMARAY_COMMON_NO_DEPRECATED
#  endif
#endif

#endif /* GAMMARAY_COMMON_EXPORT_H */
