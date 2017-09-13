// Alekzandr Zablockis
// 9/11/2017
// This program is a Mad Lib Machine

 #include <iostream>
 #include <string>
 using namespace std;
 
 int main ()
{
    string adjective_1 = "";
    string adjective_2 = "";
    string noun_1 = "";                 //Place holders for the AD Libs
    string noun_2 = "";
    string plural_noun = "";
    
    
    
    cout << "Enter a adjective: ";
    cin >> adjective_1; 
    cout << endl;
    cout << "Enter a adjective: ";
    cin >> adjective_2;
    cout << endl;
    cout << "Enter a noun: ";            // The user inputs the words that will be in there AD Libs
    cin >> noun_1;
    cout << endl;
    cout << "Enter a noun: ";
    cin >> noun_2;
    cout << endl;
    cout << "Enter a plural_noun: ";
    cin >> plural_noun;
    cout << endl;
    
    
    
    
    cout << "The hood is a " << adjective_1 << " place." << endl;
    cout << "The residents are very " << adjective_2 << " but they manage to survive." << endl;        // This is the Madlib outputted with the users inputs being played.
    cout << "They are plauged by the " << noun_1 << " and " << noun_2 << " Brothers." << endl;;
    cout << "And their ragtag gang the " << plural_noun << "." << endl;
    
    
}