This repo is used as a template to show how to structure a project around CMake.
The repo builds an executable in `app/` and builds / links a static and a dynamic library to be used by the executable to simply print `"hello world"` from them.

Steps to build:
1. make sure that CMake and optionaly Ninja is installed
2. create a build dir in the project root (`mkdir build`) and navigate into it.
3. run `cmake -G Ninja ..` to generate make/ninja files from the parent directory.
4. run `ninja` or `make` to then Compile the project.
5. navigate into `build/app` and list the contents. There should be a `main.exe`
6. run `./main.exe` to execute the program.
