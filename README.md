# prodigybuild-testing-vidhi 

This is a repository for the `prodigybuild-testing-vidhi` project. The project consists of a collection of algorithms implemented in C, a tic-tac-toe game and a to-do list. Below are the setup steps needed for running the project.

## Software Requirements

#### For Mac:

- Install Homebrew:
  ```
  /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
  ```
- Install GCC:
  ```
  brew install gcc
  ```
#### For Windows:

- Install MinGW-W64: Go to MinGW-W64 website (https://mingw-w64.org/doku.php) and download the installer. Install it on your PC.

## Cloning the Repository:

Clone the repository using the following command, replacing `<your_user_name>` with your GitHub username:
```
git clone https://github.com/<your_user_name>/prodigybuild-testing-vidhi.git
```
## Running the Project:

1. Navigate to the repository directory:
  ```
  cd prodigybuild-testing-vidhi
  ```
2. Compile the C files:
  ```
  gcc -o outputfile inputfile.c
  ```
3. Run the output file:
  ```
  ./outputfile
  ```
Replace `outputfile` with the name you want to give to the compiled file and `inputfile.c` with the name of the C file you want to compile and run.

## CI/CD Pipeline:

- If the code is related to the CI/CD pipeline, please refer to the pipeline documentation for steps on deployment steps.

## Contributing 

Check out the `CONTRIBUTING.md` files for guidelines on how to contribute to this project. All algorithms must be programmed in C. Make sure to test your code before running it.