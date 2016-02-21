#! /bin/sh

# External build directory
BUILD_DIR="build"
CURRENT_DIR=$(pwd)

# External Build: outside of the project structure
mkdir -p "$BUILD_DIR"
cd "$BUILD_DIR"

# Create the makefile based on the CMakeLists.txt up-dir
cmake -G "Unix Makefiles" ..

# Make the targets
make install

# Change the directory back
cd  "$CURRENT_DIR"

