# CMake
A CMake build script example

## Usage
### Building project
You need to have the [CMake][10] installed. Minimum version required is 3.0.0.

In the project root directory execute the shell script configure.sh with root privileges, e.g.:
```
sudo ./configure.sh
```

This script will create a new output directory, named *build* by default, to enable an _out-of-place_ build. Calling the CMake will generate a new makefile there (of course it is possible to use different build systems, e.g. [ninja][11]).

Next step it will proceed is project compilation and linking, that results in two binaries created:
- cmake-example-library.so
- cmake-demo

Those two, and a ```sample/DemoClass.h``` header file will be then integrated into the file system structure. This process is called installation.
On Linux distributions this will, by default, be:

|/usr/local/bin|for executables|
|/usr/local/lib|for libraries (static and shared)|
|/usr/local/include/<project_name>|for headers|

The default location is OS dependent and can be also modified.

### Running the executable
It is possible to run the *cmake-demo* binary from the build directory or call it from the installation folder.
Normally the path ```/usr/local/bin``` is being searched by the system when executing a program, so it shall be enough to call ```cmake-demo```.

In case of "cannot open shared object file" linker problem, it is possible to add, before calling the executable, the library location into it's search list:
```
LD_LIBRARY_PATH="$LD_LIBRARY_PATH:/usr/local/lib" cmake-demo
```

Copyright &copy; 2016 [Przemysław Podwapiński][98].<br>
Distributed under the [Simplified BSD License][99].

[10]:https://cmake.org/
[11]:https://ninja-build.org/
[98]:mailto:p.podwapinski@gmail.com
[99]:https://www.freebsd.org/copyright/freebsd-license.html
