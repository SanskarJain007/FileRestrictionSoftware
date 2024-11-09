# FileRestrictionSoftware

# File Restriction Software

## Overview
This software restricts users from copying and pasting files or content from a specified "root" folder to any location outside this folder, including external drives or cloud locations.

## Features
- Monitors clipboard operations.
- Intercepts file copy-paste attempts at the system level.

## Setup
1. Clone the repository.
2. Ensure you are on a Windows environment as this example uses `windows.h`.
3. Compile and run `main.cpp`.

## Usage
1. Update the `rootFolder` path in `main.cpp` to the desired folder path.
2. Run the program. Any attempt to paste files from this folder outside will be restricted.

## Assumptions
- Windows-only support.
- Requires permission to access system clipboard and file monitoring.

---

### Notes
Since Replit has limitations on system-level hooks, testing this project fully on Replit may be difficult. For complete functionality, it is recommended to test on a local Windows environment.
