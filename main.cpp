#include <iostream>
#include "file_monitor.h"

int main() {
    std::string rootFolder = "C:\\ProtectedFolder"; // Setting my root folder path

    // Start monitoring clipboard and file system
    if (startClipboardMonitor()) {
        std::cout << "Clipboard monitoring started successfully.\n";
    } else {
        std::cerr << "Failed to start clipboard monitoring.\n";
    }

    if (startFileSystemMonitor(rootFolder)) {
        std::cout << "File system monitoring started successfully.\n";
    } else {
        std::cerr << "Failed to start file system monitoring.\n";
    }

    // Keep the program running (adjust as needed)
    while (true) {
        // Sleep or wait for an exit command
    }

    return 0;
}
