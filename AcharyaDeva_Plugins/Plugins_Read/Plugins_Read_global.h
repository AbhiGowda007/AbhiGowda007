#ifndef PLUGINS_READ_GLOBAL_H
#define PLUGINS_READ_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PLUGINS_READ_LIBRARY)
#  define PLUGINS_READ_EXPORT Q_DECL_EXPORT
#else
#  define PLUGINS_READ_EXPORT Q_DECL_IMPORT
#endif

#endif // PLUGINS_READ_GLOBAL_H
