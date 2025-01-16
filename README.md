# prodigybuild-testing-vidhi

This repository contains code files written in C language. It covers various concepts such as Binary Search tree, Linked List, Insertion, Deletion and others. 

## Prerequisites

Below are the software and tools required to run and test the code in this repository:

- GCC Compiler
- DataGrip or any other SQL Server Database tool (if the database is required)
- Code Editor (like Visual Studio Code, Sublime text etc)

## Setup on MacOS

### Installing GCC on MacOS

```shell
brew install gcc
```

### Installing DataGrip on MacOS

Downloading from the official Jetbrains website [here](https://www.jetbrains.com/datagrip/download/#section=mac)

## Setup on Windows

### Installing GCC on Windows

Download and install GCC from the MinGW-w64 project: [link here](https://mingw-w64.org/doku.php)

### Installing DataGrip on Windows

Downloading from the official Jetbrains website [here](https://www.jetbrains.com/datagrip/download/#section=windows)

## Execution

Compile the c files using gcc as follows:

```shell
gcc file.c -o file
```

Run the file output as:

```shell
./file
```

## Environment Setup

Ensure that the environment path is set up correctly for smooth execution of scripts:

On Windows, add the MinGW64 bin directory to your system PATH: 

```shell
setx path "%path%;C:\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin"
```

On MacOS, the GCC compiler is already added in the system path.

## CI/CD Deployment

If CI/CD is in place, refer to the pipeline document about how the code from repository goes to production.

## Contributing

For contributing, please open an issue first to discuss what you would like to change and update. 

For implementation of algorithms, all algorithms must be written in C. Please ensure test cases cover edge situations and code is clean, succinct and easily understandable.

## License
MIT

## Support

In case you find an issue, please feel free to report it with a detailed description in the Issues section.

Happy Programming!