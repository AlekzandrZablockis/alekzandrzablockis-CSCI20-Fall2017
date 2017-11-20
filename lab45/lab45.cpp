// Alekzandr Zablockis
// 11/18/17
// This program will create names for a website. It will have a max size of 10 characters for the first name and 20 for the last name. It will warn the user if the two names match. Then it will provide three names to choose from to be the user name.
// These names are a combonation of two names the user entered.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first_name = ""; // Place holders
    string last_name = "";
    int i = 0;   // Sets our loops to keep going
    int i_2 = 0;
    
    while (i < 100) // Loops until a valid first name is put in
    {
        cout << "Please put in your first name. Max characters 10." << endl;
        cin >> first_name;
        
        if (first_name.length() > 10)  // .length() creates the length of the string into a number
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
        
        if (last_name.length() > 20) // .length() creates the length of the string into a number
        {
            cout << "The first name you have entered is too long. Try again." << endl;
        }
        else 
        {
            i_2 = 500;
        }
    }
    
    if (first_name == last_name)
    {
        cout << "The two names you have entered are the same" << endl;
    }
    
    cout << "Name: " << first_name << " " << last_name << endl;
    cout << "Which of the following usernames would you like?" << endl;
    cout << first_name[0] << first_name [1] << last_name << endl;       // Outputs final output to user with three possible name choices
    cout << first_name[0] << last_name << endl;
    cout << first_name << last_name << endl;
}

/*
EXAMPLE 1
Please put in your first name. Max characters 10.
Alekzandr
Please put in your last name. Max characters 20.
Zablockis
Name: Alekzandr Zablockis
Which of the following usernames would you like?
AlZablockis
AZablockis
AlekzandrZablockis

EXAMPLE 2
Please put in your first name. Max characters 10.
April
Please put in your last name. Max characters 20.
Browne
Name: April Browne
Which of the following usernames would you like?
ApBrowne
ABrowne
AprilBrowne

EXAMPLE 3
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
JAMES
Please put in your last name. Max characters 20.
JAMES
The two names you have entered are the same
Name: JAMES JAMES
Which of the following usernames would you like?
JAJAMES
JJAMES
JAMESJAMES
*/