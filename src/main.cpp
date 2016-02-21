#include <iostream>

#include "sample/DemoClass.h"

int main( int argc, char** arg )
{
    ::std::cout << "Hello CMake from main.cpp" << ::std::endl;
    ::sample::DemoClass().demo();
    return 0;
}
