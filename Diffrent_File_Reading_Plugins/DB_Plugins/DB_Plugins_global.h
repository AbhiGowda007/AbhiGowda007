#ifndef DB_PLUGINS_GLOBAL_H
#define DB_PLUGINS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DB_PLUGINS_LIBRARY)
#  define DB_PLUGINS_EXPORT Q_DECL_EXPORT
#else
#  define DB_PLUGINS_EXPORT Q_DECL_IMPORT
#endif

#endif // DB_PLUGINS_GLOBAL_H
