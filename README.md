<p align="center"><img width="50%" src="https://triton-library.github.io/files/triton2.png"/></p>

**Triton** is a dynamic binary analysis library. It provides internal components that allow you to build your program analysis tools,
automate reverse engineering, perform software verification or just emulate code.

cmake .. -DZ3_INCLUDE_DIRS="D:/GitDownloadLibrary/z3-4.13.0-x64-win/include" -DZ3_LIBRARIES="D:/GitDownloadLibrary/z3-4.13.0-x64-win/bin/libz3.lib" -DCAPSTONE_INCLUDE_DIRS="D:/GitDownloadLibrary/capstone-5.0.1/include" -DCAPSTONE_LIBRARIES="D:/GitDownloadLibrary/capstone-5.0.1/build/Release/capstone.lib"

cmake --build . --config Release

cmake --install . --config Release