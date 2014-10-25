/* 
 * File:   main.cpp
 * Author: Henrik Samuelsson
 *
 * Created on den 25 oktober 2014, 19:38
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * Adding some bugs on purpose to see what the compiler says.
 */
int main(int argc, char** argv) {
   
    if(int a = 3)
        cout << "Did nog get any error when screwing up usage of "
                "assignment and comparison.\n";
    
    // int b << Omitting a semicolon here gave error: expected initializer
    // before 'return´
   
    return 0;
}

