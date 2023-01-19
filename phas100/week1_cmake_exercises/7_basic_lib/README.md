# CMakeHelloWorld

## Description

This is a simple cmake example for building an executable program from a single C++ source file, that prints the classical `Hello World!` line to the console.

## Usage

At the project root, run the following sequence of commands

``` sh

$ cmake -S . -B build_dir
$ cmake --build build_dir --target hello_world
$ ./build_dir/

```

