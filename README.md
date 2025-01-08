```
# prodigybuild-testing-vidhi

This repository contains an assortment of programming related exercises, algorithms and small projects meant for practice and understanding how different concepts work at a grassroot level.

## Prerequisites 

Before you begin, ensure you have met the following requirements:

* You have installed the latest versions of `C compiler`, `GCC` and `Git`.

#### For Mac:

You can use Homebrew for package installation on Mac:

  ```
  # Install Homebrew
  /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
  
  # Install C compiler
  brew install --cask xcode
  
  # Install GCC
  brew install gcc
  
  # Install Git
  brew install git
  ```

#### For Windows:

You can install the Prerequisites by downloading them from their official websites:

  * [MinGW-w64 (C compiler & GCC)](https://mingw-w64.org/doku.php/download)
  * [Git](https://git-scm.com/download/win)

## Setup for Local Development


1. Clone the repo:
  
   ```
   git clone https://github.com/your-username/prodigybuild-testing-vidhi.git
   ```

2. Go to the project directory:
   
   ```
   cd prodigybuild-testing-vidhi
   ```

3. Compile the programs:
   
  ```
  gcc -o outputfile program.c
  ```

   Replace 'outputfile' with what you want the compiled program to be called. Replace 'program' with the filename of the program you want to compile.


## Running the Program

To run the programs, run the following command in terminal: 

`./outputfile`

Replace 'outputfile' with what you've named your compiled program. The terminal should show the output of whichever program you've chosen to run.

## Environment Setup

This project uses a `.gitignore` file to ignore system-specific and sensitive files. You can edit the file according to your project requirements.


## Deployment

This project does not contain any CI/CD code for deployment steps since it is primarily built for learning purposes and does not require any deployment.

```