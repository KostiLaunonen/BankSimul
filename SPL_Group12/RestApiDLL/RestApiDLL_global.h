#ifndef RESTAPIDLL_GLOBAL_H
#define RESTAPIDLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RESTAPIDLL_LIBRARY)
#  define RESTAPIDLL_EXPORT Q_DECL_EXPORT
#else
#  define RESTAPIDLL_EXPORT Q_DECL_IMPORT
#endif

#endif // RESTAPIDLL_GLOBAL_H
