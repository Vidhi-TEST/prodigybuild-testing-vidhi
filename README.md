```
# Prodigybuild-testing-vidhi 

This repository provides a collection of C language algorithms for beginners. These algorithms are open source and you're encouraged to contribute especially if you're new to programming. The CI/CD pipeline is tested using the Prodigybuild platform.

## Directory Structure
- `.idea`: Contains idea’s IDE specific files which are ignored.
- `c`: Contains `.c` language files with algorithm implemented.
- `tictactoe`: Contains code to play tic-tac-toe in console application.
- `todolist`: Contains a minimal implementation of todo list.

## Getting Started

### Installation

#### On Windows:

This project uses the GNU GCC Compiler, so you must have MinGW installed on your machine. 

To install MinGW, you can follow the steps below:

1. Download MinGW from the [official website](https://sourceforge.net/projects/mingw/).
2. Start the process by running the setup file.
3. Make sure to install the mingw32-base package when selecting the packages to be installed.
4. On the left side of the software, click on `Installation > Apply Changes`.
5. After the installation is complete, you need to add the MinGW bin directory to the environment variable called PATH. Go to: Control Panel ➤ System ➤ ➤ Advanced System Settings ➤ Environment Variables ➤ System variables (double click on Path) ➤ New ➤ And add this address `C:\MinGW\bin` to it.

#### On Mac:

You need to install GCC. You can do so by installing 'Command Line Tools for XCode' using the command:

```
xcode-select --install
```

### Running Code Locally

After cloning the repository, navigate to the desired `.c` file:
```
cd /path/to/file.c
```
Compile the file using the gcc compiler:
```zsh
gcc file.c
```
Run your compiled file:
```zsh
./a.out
```
### CI/CD Pipeline

Refer to the pipeline file './.idea/vcs.xml' for the steps needed to setup the CI/CD pipeline.

## Contribution

Please follow the guidelines in the 'c/algorithms/CONTRIBUTING.md' file when making a contribution. Any contributions making the code cleaner or better are highly encouraged.

## License

Open source. Refer to the 'c/algorithms/README.md' for more details.
```
