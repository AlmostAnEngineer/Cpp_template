
# Simple C++ Project Template with Pre-Configured CMake and GTest

This project template provides a simple starting point for C++ projects, with pre-configured CMake and GTest. This will save you a lot of time that you would otherwise spend setting up the build and testing environment.

## Getting Started

To get started, clone the repository and make changes to the code to suit your needs. Then, use CMake to build and compile the project. The pre-prepared unit tests allow you to easily test your code.

## Requirements

To use this project template, you will need:

- A C++ compiler (e.g. GCC or Clang)
- CMake 3.0 or later
- GTest (installed or downloaded as part of the project)

## How to Use
### Building the Project
To build the project, follow these steps:

1. Open the terminal in the same folder as `CMakeLists.txt`.
2. Enter the following commands:

		mkdir build
		cd build/
		cmake ..
		make
		./MyProject
	
4. This will compile and run the project, outputting any results or errors to the terminal.

### Recompiling
If you need to recompile the project after making changes, follow these steps:

1. Open the terminal in the same folder as `CMakeLists.txt`.
2.  Enter the following commands:

		cd build/
		make
		./MyProject
4. This will compile and run the updated project, outputting any results or errors to the terminal.

## Contributions

If you would like to contribute to this project or report a bug, please use the "Issues" system in this repository.

## License

This project is licensed under the MIT License. See the LICENSE file for more information.
