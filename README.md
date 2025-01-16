# prodigybuild-testing-vidhi 

This repository contains various "C" algorithms and some project specifications related to task management and tic-tac-toe game. This codebase includes some CI/CD pipeline setup files, related to the "Idea" IDE.

The below setup instructions are provided for macOS and Windows operating systems. 

## macOS 

### Prerequisites 

You must have the following installed on your machine:

- [GCC](https://gcc.gnu.org/install/) (Latest version)
- [Make](https://www.gnu.org/software/make/) (Latest Version)

You can install both GCC and Make by running the following command in terminal:

```
brew install gcc make
```
Once you have installed the above, you can validate the installation by running:

```
gcc --version
make --version
```

### Project Setup

First, clone the repository using git:

```
git clone https://github.com/{your_username}/prodigybuild-testing-vidhi.git
```

Compile the required algorithms:

```
gcc -o {algorithm_file_name}
```
For example:

```
gcc -o c/algorithms/InsertionDeletionLinkedList.c
```

## Windows 

### Prerequisites

You must have the following installed on your machine:

- [MinGW-w64](http://mingw-w64.org/doku.php) (Latest version)

Install MinGW-w64 via the installer, select your architecture and leave the other options at their defaults.

Once the installation is complete, add MinGW-w64 to your system path:

- Search for "Edit the system environment variables".
- Click on "Environment Variables".
- In the "System Variables" select "Path" and click "Edit".
- Click "New" and add the bin directory of your MinGW-w64 install location (usually "C:\Program Files\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin").

You can validate your installation by running:

```
gcc --version
make --version
```

### Project Setup

First, clone the repository using git:

```
git clone https://github.com/{your_username}/prodigybuild-testing-vidhi.git
```

Compile the required algorithms:

```
gcc -o {algorithm_file_name}
```
For example:

```
gcc -o c/algorithms/InsertionDeletionLinkedList.c
```

## CI/CD Pipeline

The CI/CD setup steps can be inferred from the .idea files, but specific deployment steps will vary depending on the CI/CD provider. Typically these steps include packaging the code, running tests, and deploying to a particular environment.

## Running Locally

You can run an algorithm locally by the following command:

```
./{algorithm_file_name}
```
For example:

```
./c/algorithms/InsertionDeletionLinkedList.c
```

## Environment Setup

Create an environment specific to the project:

- Backend: "C"
- IDE: Any IDE supporting C programming.