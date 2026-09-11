# Hello C++ Project

This repository is a small C++17 Hello World application built with CMake. A
Makefile provides convenient commands for configuring, building, running, and
testing the project. Unit tests use GoogleTest, which CMake downloads and
builds through `FetchContent`.

## Project structure

```text
.
├── CMakeLists.txt       # CMake project and test configuration
├── Makefile             # Convenience commands for the CMake workflow
├── include/             # Public headers
├── src/                 # Application and library source files
└── test/                # GoogleTest unit tests
```

## Prerequisites

- CMake 3.16 or newer
- A C++17-compatible compiler
- Make
- Internet access on the first configuration, so CMake can download
  GoogleTest

## Build and run

Build the application and its tests:

```sh
make build
```

Run the application:

```sh
make run
```

The application prints:

```text
Hello, world!
```

## Run tests

Build and run the GoogleTest suite through CTest:

```sh
make test
```

To run the test executable directly:

```sh
./build/unit_tests
```

## Clean

Remove the generated CMake build directory:

```sh
make clean
```

## Direct CMake workflow

The Makefile is optional. The equivalent CMake commands are:

```sh
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
```
