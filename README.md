# Prodigybuild-Testing-Vidhi

A simple project repository containing code for Tic-Tac-Toe and ToDo List games in C language. 

## Setup

### MacOS

1. Install the Xcode command line tools (including GCC): 
```sh
 xcode-select --install
```

2. Verify your installation by running: 
```sh
gcc --version
```

### Windows

1. Download and install GCC from [MinGW](https://mingw-w64.org/doku.php/download/mingw-builds). 

2. Add the bin directory in the MingGW installation to your system PATH. 

3. Open a command prompt and run 
```sh
gcc --version
```
to verify the installation.

## Running the Projects Locally

Compile the C files: 

```sh
gcc -o tictactoe tictactoe.c
gcc -o todolist todolist.c
```

Run the compiled files: 

```sh
./tictactoe
./todolist
```

Note: Enter the todo task as an integer.

## Environment Setup

No specific environment setup is required as the projects are standalone C programs. 

## Deployment

This project does not include a CI/CD pipeline for deployment.
