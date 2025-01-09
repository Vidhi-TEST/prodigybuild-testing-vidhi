```
# prodigybuild-testing-vidhi

This repository contains a simple tic-tac-toe game implemented in C as well as a simple todo list program, also implemented in C.

## Requirements

To run the code in this repository, you will need a C compiler such as GCC. 

## Installation 

### Mac

1. Install Homebrew if you haven't already. You can find instructions [here](https://brew.sh/).

2. Install GCC via Homebrew in your terminal with the following command:

```
brew install gcc
```

### Windows

1. Download and install MinGW from [here](http://www.mingw.org/).

2. Add the binary directory to the system PATH. You can find instructions [here](https://www.computerhope.com/issues/ch000549.htm).

## Running the code

1. Navigate to the directory containing the C file you wish to run.

2. Compile the code with the following command:

```
gcc filename.c
```

3. Run the code with the below command:

```
./a.out
```

Replace "filename" with either "tictactoe" or "todolist".

## Environment Setup

Ensure that all dependencies are installed and that the necessary paths are set in order to successfully compile and run the programs. 

To run the todo list, you will need a way to persist data as the data is currently stored in memory and will be lost when the program closes. This may be accomplished with a simple flat file, or a more complex database set up, depending on your use case.

## CI/CD

If this repository is connected to a CI/CD pipeline, push changes to the repository will trigger the pipeline. The steps required will depend on how your specific pipeline is configured.
```