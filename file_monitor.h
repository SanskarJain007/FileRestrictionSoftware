//This header file declares the functions used for clipboard and file system monitoring.

#ifndef FILE_MONITOR_H
#define FILE_MONITOR_H

#include <string>

// Function declarations for clipboard and file system monitoring
bool startClipboardMonitor();
bool startFileSystemMonitor(const std::string& rootFolder);

#endif // FILE_MONITOR_H
