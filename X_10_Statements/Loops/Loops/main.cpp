/* 
 * File:   main.cpp
 * Author: Henrik Samuelsson
 *
 * Created on 22 October 2014, 21:19
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * Exercise with different types of loops.
 */
int main(int argc, char** argv) {
    const int max_length = 80;
    char input_line[max_length] = "How many types of loops exist in c++??";
    int quest_count = 0;
    
    for(int i=0; i!=max_length; i++)
        if(input_line[i]=='?')
            quest_count++;
    cout << "For loop found " << quest_count << " question marks.\n";
    
    quest_count = 0;
    
    for(char* p = input_line; *p!=0; p++)
        if(*p=='?')
            quest_count++;
    cout << "For loop based on pointer found " << quest_count 
            << " question marks.\n";
    
    quest_count = 0;
    
    int i = 0;
    while(i != max_length)
    {
        if(input_line[i]=='?')
        {
            quest_count++;
        }
        i++;
    }
    cout << "While loop found " << quest_count << " question marks.\n";
    
    quest_count = 0;
    
    for(char &c: input_line)
        if(c == '?')
            quest_count++;
    cout << "For each loop found " << quest_count << " question marks.\n";
      
    return 0;
}

