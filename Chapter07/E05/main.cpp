/* 
 * File:   main.cpp
 * Author: Henrik Samuelsson
 *
 * Created on den 6 oktober 2014, 21:29
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * Given two int*s pointing into an array, find and output the number of ints 
 * between the two pointed-to ints (zero if they point to the same element).
 */
int main(int argc, char** argv) {
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int* p1 = a + 2;
    int* p2 = a + 4;
    cout << abs(p1 - p2);
    return 0;
}

