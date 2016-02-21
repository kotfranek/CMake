#include <iostream>
#include "sample/DemoClass.h"

namespace sample
{
    void DemoClass::demo() const
    {
        ::std::cout << "Hello CMake from a Shared Object" << ::std::endl;
    }
}
