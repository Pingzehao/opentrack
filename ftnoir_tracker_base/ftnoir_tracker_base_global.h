#ifndef FTNOIR_TRACKER_BASE_GLOBAL_H
#define FTNOIR_TRACKER_BASE_GLOBAL_H

#include <QtGlobal>

#ifndef OPENTRACK_MAIN
# define FTNOIR_TRACKER_BASE_EXPORT Q_DECL_EXPORT
#else
# define FTNOIR_TRACKER_BASE_EXPORT Q_DECL_IMPORT
#endif

#endif // FTNOIR_TRACKER_BASE_GLOBAL_H
