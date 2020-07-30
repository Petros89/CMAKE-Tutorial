cmake_minimum_required(VERSION 2.8.9)
set(CMAKE_BUILD_TYPE RELEASE)


# Project name
project (Hello)

# Bring the headers, such as do_something.h into the project
include_directories(include)


# Link some compiler flag options for different compilers (intel, GNU)
if (CMAKE_CXX_COMPILER_ID MATCHES Intel)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
    set(CMAKE_CXX_FLAGS_DEBUG "-g -traceback")
    set(CMAKE_CXX_FLAGS_RELEASE "-O3 -std=c++11")
endif()

if(CMAKE_CXX_COMPILER_ID MATCHES GNU)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Ofast -march=native -std=c++11")
    #set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g3")
    #set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall -Ofast -march=native -std=c++11")
    # Prints at stdout the compiler command after running make. Use value OFF to deactivate
    set(CMAKE_VERBOSE_MAKEFILE ON)
endif()


# Can manually add the sources using the set command as follows:
# set(SOURCES src/hello.cpp)

# However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")


# Link executable
add_executable(Hello ${SOURCES})
