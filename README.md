# CMake
A CMake build script example

## Usage
### Building project
You need to have the [CMake][10] installed. Minimum Version required is 3.0.0.

In the project root directory execute the shell scrpit configure.sh with root privileges, e.g.:
```
sudo ./configure.sh 
```

This script will create a new output directory, named *build* by default, to enable an _out-of-place_ build. CMake will generate a new makefile. Next step it will proceed is project compilation and linking, that results in two binaries created:
- cmake-example-library.so
- cmake-demo
Those two, and a ::sample::DemoClass header file will be then integrated into the filesystem structure. This process is called installation.

### Running the executable
It is possible to run the *cmake-demo* binary from the build directory or call it from the installation folder.

Copyright &copy; 2016 [Przemysław Podwapiński][98].<br>
Distributed under the [Simplified BSD License][99].

[10]:https://cmake.org/
[98]:mailto:p.podwapinski@gmail.com
[99]:https://www.freebsd.org/copyright/freebsd-license.html
