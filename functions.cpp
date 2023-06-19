/*
* Name: Kingsly Bude and Kritika Singh
* Lab 5: Strings
*/

#include <iostream>
#include <string>
#include "functions.h"
using namespace std;


bool isAlpha(string input)
{
    for (int i = 0; i < input.length(); i++)
    {
        if (isalpha(input[i]) == 0)
        {
            return false;
        }
    }
    return true;
}


bool isNumeric(string input)
{
    for (int i = 0; i < input.length(); i++)
    {
        if (isdigit(input[i]) == 0)
        {
            return false;
        }
    }
    return true;
}

bool hasSymbols(const string& input)
{
    for (int i = 0; i < input.length(); i++)
    {
        if (isAlpha(input) == false && isNumeric(input) == false)
        {
            return false;
        }

        else
        {
            return true;
        }
    }
}

void displayType(string input)
{
    if (isAlpha(input))
    {
        cout << "The string has alphabets." << endl << endl;
    }
    else if (isNumeric(input))
    {
        cout << "The string is numeric." << endl << endl;
    }
    else
    {
        cout << "The string has special characters. " << endl << endl;
    }
}

string confirmQuit()
{
    string input;
    cout << "Would you like to quit? (Y/N): ";
    cin >> input;
    while (input != "Y" && input != "y" && input != "N" && input != "n")
    {
        cout << "Invalid Entry!" << endl << "Would you like to quit? (Y/N): ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> input;
    }
    return input;
}