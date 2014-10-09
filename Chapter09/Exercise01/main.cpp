/* 
 * File:   main.cpp
 * Author: Henrik Samuelsson
 *
 * Created on den 9 oktober 2014, 22:03
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
 * Define a struct with a member of each of the types bool, char, int, long, 
 * double, and long double.  Order the members so as to get the largest size of 
 * the struct and the smallest size of the struct.
 */
int main(int argc, char** argv) {

    cout << "bool: " << sizeof(bool) << endl;
    cout << "char: " << sizeof(char) << endl;    
    cout << "int: " << sizeof(int) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "long double: " << sizeof(long double) << endl << endl;

    struct large 
    {
        char c;
        double d;
        long l;
        long double ld;
        int i;
        bool b;
      
    };
    cout << "large: " << sizeof(large) << endl;
    
    struct small 
    {
        bool b;
        char c;
        int i;
        long double ld;
        long l;
        double d;
        
    };
    cout << "small: " << sizeof(small) << endl;
    
    return 0;
}

