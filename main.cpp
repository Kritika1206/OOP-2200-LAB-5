/*
* Name: Kingsly Bude and Kritika Singh
* Lab 5: Strings
*/

#include <iostream>
#include <string>
#include "functions.h"
using namespace std;

int main() {

    string mystring;
    bool answer = true;
    string ifcontinue;

    while (answer)
    {
        system("CLS");
        cout << "Enter a string: ";
        cin >> mystring;

        displayType(mystring);
        ifcontinue = confirmQuit();

        if (ifcontinue == "Y" || ifcontinue == "y")
        {
            answer = false;
        }
    }

    return 0;
}