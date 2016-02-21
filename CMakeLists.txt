# CMake minimum version dependency
cmake_minimum_required( VERSION 3.0.0 FATAL_ERROR )

# Project name
project( "cmake-example" )

# Compiler and linker flags
set( CPP_COMPILE_FLAGS "-g -Wall -std=c++11" )
set( CPP_LINK_FLAGS "-o3" )

# Header files locations
include_directories( include )

# Main project library
add_library( cmake-example-library SHARED
    src/sample/DemoClass.cpp
)

# Demo application: sources
add_executable( cmake-demo
    src/main.cpp
)

# Demo application: required libraries
target_link_libraries( cmake-demo
    cmake-example-library
)

# Set the compiler and linker flags for particular targets
set_target_properties( cmake-example-library PROPERTIES COMPILE_FLAGS ${CPP_COMPILE_FLAGS} )
set_target_properties( cmake-demo PROPERTIES COMPILE_FLAGS ${CPP_COMPILE_FLAGS} )
set_target_properties( cmake-demo PROPERTIES LINK_FLAGS ${CPP_LINK_FLAGS} )

# Target install
install( TARGETS cmake-demo DESTINATION bin )
install( TARGETS cmake-example-library DESTINATION lib )
install( DIRECTORY 
    include/ DESTINATION include/${CMAKE_PROJECT_NAME}
    FILES_MATCHING PATTERN "*.h" 
)
