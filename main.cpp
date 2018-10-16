/**
 *File: main.cpp
 *Developer: Angel Castaneda
 *Email: angelc5954@student.vvc.edu
 *Description: This program will take a string and will return the count of lower case and upper case "a"s.
**/

#include<iostream>
#include<cstring>
#include<ctype.h>

using namespace std;

int count_a(string);

int main()
{
    string s;
    cout << "Enter a word: ";
    cin >> s;
    
    cout << "There are " << count_a(s) << " A's in your string. " << endl; 

    return 0;
}

int count_a(string s)                      //This function will return how many "a"s are there.
{
    int x = 0;

    for(int i = 0; i < s.size(); i++)
    {
        char c = tolower(s.at(i));
        if(c == 'a')
            x++;
    }
    return x;    
}
