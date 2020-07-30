#include <iostream>
#include <math.h>
#include "parameters.h"
#include "do_something.h"

using namespace std;

int main(int argc, char *argv[]){
   
    cout << "Hello World!" << endl;

    cout << "Let's calculate PI..." << endl;
    //call printPI function from do_something.cpp subroutine
    printPI();

   return 0;
}
