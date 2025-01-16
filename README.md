```markdown
# prodigybuild-testing-vidhi

This repository contains a collection of programs and algorithms involving different areas of computer programming language written in C. The repository also contains some developer support files for IntelliJ IDEA. The contributing guidelines can be found in `c/algorithms/CONTRIBUTING.md`.

## Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [Testing](#testing)
- [Contributing](#contributing)
- [Deployment](#deployment)

## Installation
Before running the programs in this repository, it's important to install a C/C++ compiler.

For MacOS:
```sh
brew install gcc
```

For Windows, you can download the compiler from the [MinGW-w64](https://mingw-w64.org/doku.php) website.

In the root repository folder, build the programs using Makefile.
```sh
make
```

## Usage
To run any of the programs, you'll generally want to use the following command structure:

```sh
./<program-name>
```
For example, if I wanted to run the tic-tac-toe game I would enter `./tictactoe`.

## Testing 
To test any code changes, build the program again using `make` and then run your tests.

## Contributing
To contribute to this repository, please see the [contributing guidelines](https://github.com/vidhi/prodigybuild-testing/blob/main/c/algorithms/CONTRIBUTING.md).

## Deployment
For information regarding deployment in a CI/CD pipeline, please refer to the appropriate scripts and settings found within the `.idea` directory of this repository.
```
