#ifndef XML_PLUGINS_GLOBAL_H
#define XML_PLUGINS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(XML_PLUGINS_LIBRARY)
#  define XML_PLUGINS_EXPORT Q_DECL_EXPORT
#else
#  define XML_PLUGINS_EXPORT Q_DECL_IMPORT
#endif

#endif // XML_PLUGINS_GLOBAL_H
