// Alekzandr Zablockis
// 11/8/17
// Desc

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char first_name[10]; // Char array
    char last_name[20]; // Char array
    int i = 0;   // For the while loop
    int i_2 = 0;
    
    while (i < 100) // Loops until a valid first name is put in
    {
        cout << "Please put in your first name. Max characters 10." << endl;
        cin >> first_name;
    
        if (strlen(first_name) > 10) // strlen checks the string length to see so we can determine if it is bigger than 10
        {
            cout << "The first name you have entered is too long. Try Again." << endl;
        }
        else 
        {
            i = 500;
        }
    }
    
    while (i_2 < 100) // Loops until a valid last name is put in
    {
        cout << "Please put in your last name. Max characters 20." << endl;
        cin >> last_name;
    
        if (strlen(last_name) > 20) // strlen checks the string length to see so we can determine if it is bigger than 20
        {
            cout << "The last name you have entered is too long. Try again." << endl;
        }
        else 
        {
            i_2 = 500;
        }
    }
    
    if ((strcmp(first_name,last_name) == 0)) // strcmp checks to see the two strings are the same. If they are the smae it equals the value 0.
    {
         cout << "The first and last you have entered match" << endl;
    }
    
    cout << "Name: " << first_name << " " << last_name;
    cout << "Which of the following usernames would you like?" << endl;
    cout << first_name[0] << first_name [1] << last_name << endl;           // Final output to the user. Uses specifc chars of the char array to create different names out of the two names put in.
    cout << first_name[0] << last_name << endl;
    cout << first_name << last_name << endl;
    
}

/*
EXAMPLE 1
Please put in your first name. Max characters 10.
Alekzandr
Please put in your last name. Max characters 20.
Zablockis
Name: Alekzandr ZablockisWhich of the following usernames would you like?
AlZablockis
AZablockis
AlekzandrZablockis

EXAMPLE 2
Please put in your first name. Max characters 10.
April 
Please put in your last name. Max characters 20.
Browne
Name: April BrowneWhich of the following usernames would you like?
ApBrowne
ABrowne
AprilBrowne

EXAMPLE 3
Please put in your first name. Max characters 10.
AnaElizibith
The first name you have entered is too long. Try Again.
Please put in your first name. Max characters 10.
AnaElizabeth
The first name you have entered is too long. Try Again.
Please put in your first name. Max characters 10.
AnaElizabeth
The first name you have entered is too long. Try Again.
Please put in your first name. Max characters 10.
AnaElizabeth
The first name you have entered is too long. Try Again.
Please put in your first name. Max characters 10.

EXAMPLE 4
Please put in your first name. Max characters 10.
James
Please put in your last name. Max characters 20.
James
The first and last you have entered match
Name: James JamesWhich of the following usernames would you like?
JaJames
JJames
JamesJames
*/