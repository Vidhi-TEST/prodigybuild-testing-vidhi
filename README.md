```markdown
# ProdigyBuild Testing

This repository is used to examine and test various algorithms using different languages. Currently, the repository is mainly using the C language to implement various algorithms. Also, this repository includes a `Tic Tac Toe` game and a `Todo List` both implemented in C as well.

## Installation
To run the code in this repository, you'll need a C compiler. XCode on MacOS and GCC on Windows have been validated. This guide will provide the installation instructions for XCode and GCC needed to compile and execute the code present in this repository.

### MacOS
To install XCode on MacOS, run the following command:
```bash
xcode-select --install
```

After installation, you can check the installed version with:
```bash
gcc --version
```
### Windows
In Windows, install MinGW-w64 from this website: https://mingw-w64.org/doku.php. Add the bin folder to the Windows path after installation is completed.

You can check the installed version with:
```bash
gcc --version
```

### Running the code
To run any c file, navigate to the specific file's directory in the Terminal and use the gcc command to compile the file, then execute the file.

For example, to run the `BST.c` file, here's what you'd do:
```bash
gcc BST.c -o BST 
./BST
```

## Usage
You can modify and use the algorithms in this repository as needed. The game (Tic Tac Toe) and the Todo List are ready to be run as mentioned in the running the code section. Also, there's a subdirectory called `algorithms` where you can find various algorithms implemented in C. 

Please ensure to follow the contributing rules and guidelines while making any changes. These rules are mentioned in the `CONTRIBUTING.md` file in the `algorithms` directory.

## CI/CD Pipeline
Please refer to the release pipeline for any deployment steps related to this project. The steps vary depending on the specific pipeline in use.
```