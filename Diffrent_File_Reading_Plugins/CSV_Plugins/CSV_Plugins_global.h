#ifndef CSV_PLUGINS_GLOBAL_H
#define CSV_PLUGINS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CSV_PLUGINS_LIBRARY)
#  define CSV_PLUGINS_EXPORT Q_DECL_EXPORT
#else
#  define CSV_PLUGINS_EXPORT Q_DECL_IMPORT
#endif

#endif // CSV_PLUGINS_GLOBAL_H
