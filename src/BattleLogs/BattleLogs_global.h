#ifndef BATTLELOGS_GLOBAL_H
#define BATTLELOGS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BATTLELOGS_LIBRARY)
#  define BATTLELOGSSHARED_EXPORT Q_DECL_EXPORT
#else
#  define BATTLELOGSSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // BATTLELOGS_GLOBAL_H