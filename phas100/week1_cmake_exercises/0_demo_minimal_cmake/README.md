# Minimal CMake

## Description

This is a simple cmake example for building an executable program from a single C++ source file, that prints the classical `Hello World!` line to the console.

## Usage

Complete the relevant `CMakeLists.txt` files. Then, at the project root, invoke the following sequence of commands.

To configure the build:

``` sh

$ cmake -S . -B build_dir

```

To perform the build:

``` sh

$ cmake --build build_dir --target hello_world

```

If the project has been configured with a suitable `run_program` custom target (see notes), the executable shall automatically run, and "Hello World!" shall be printed on the console window. Otherwise, manually run the executable as follows:

``` sh
$ ./build_dir/hello_world
```

Upon running the `hello_world` executable, the string "Hello World!" shall be printed on the console.
