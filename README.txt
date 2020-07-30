# author: Petros Apostolou
# e-mail: trs.apostolou@gmail.com
#   date: 7/30/2020



# This is a very simple tutorial of how to build project code using CMAKE via CMakeLists.txt file
# All the information for the project including libraries, source code, dependencies are described
# inside the CMakeLists.txt file.


# ======
# STEPS
# ======

INITIAL STEPS
-----------------------------------------------------------------
1) Create a directory for your project
2) Locate inside your project directory your source code
3) Create the CMakeLists.txt file

BUILD STEPS
-----------------------------------------------------------------
1) From within the project parent dir create a build dir
+ Project
  + Build
2) Access the Build directory
3) Run the build command: cmake ../
   This command builds your project compiler and automatically
   generates your Makefile with the compiler options you have
   specified from within the CMakeLists.txt file.

COMPILE STEPS
-----------------------------------------------------------------
1) Run the compiling command: make
   This command compiles your source code and generates your
   final executable file for your project.
   If you want multithreading option to your compiling command
   you can use the -j <number of threads> command (e.g make -j4)
2) To clean your executable and object files run: make clean
