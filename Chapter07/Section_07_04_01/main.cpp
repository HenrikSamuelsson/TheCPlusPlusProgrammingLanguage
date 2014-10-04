/* 
 * File:   main.cpp
 * Author: Henrik Samuelsson
 *
 * Created on den 4 oktober 2014, 12:01
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void fi(char v[]);
void fp(char v[]);

/*
 * Exercise that shows how to access an array in two different ways.
 */
int main(int argc, char** argv) {
    char td[] = "test data\0";
    
    fi(td);
    fp(td);
    
    return 0;
}

/*
 * Uses a pointer to an array plus an index when printing.
 */
void fi(char v[])
{
    for (int i = 0; v[i]!=0; ++i)
        cout << v[i];
    cout << endl;
}

/*
 * Uses a pointer to an element when printing.
 */
void fp(char v[])
{
    for (char* p = v; *p!=0; ++p)
        cout << *p;
    cout << endl;
}