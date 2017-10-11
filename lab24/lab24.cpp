// Alekzandr Zablockis
// 10/10/17
// desc

#include <iostream>
#include <ctime>
using namespace std;

/* This funciton switches two values around
   The input is two integers
   The output isn't printed but the intergers are swapped
*/

void Switch(int& num_1, int& num_2) 
{
    int temp;      
    temp = num_1;    
    num_1 = num_2;    
    num_2 = temp;    
}

/* This function takes two values, uses our Switch function to switch them around and then creates a truly random number using srand and the time() commands
   The input is two integer numbers
   The output is a random number between the range of the switched integer numbers
*/

    int Random(int& value_1, int& value_2) 
{
        Switch(value_1, value_2);    
        srand(time(0));                 
        return rand()%(value_1 - value_2) + value_2;    
}

int PoundsToKilograms(double pounds)
{
    double kilograms;
    kilograms = pounds * (1/2.2046226218);
    return kilograms;
}

int KilogramsToPounds (double kilograms)
{
    double pounds;
    pounds = kilograms * 2.2046;
}

int main ()
{
    int value_1 = 0;
    int value_2 = 0;
    
    cout << "Enter a value" << endl;
    cin >> value_1;
    cout << "Enter another value" << endl;
    cin >> value_2;
    
    cout << "A random number between your given inputs is: "<< Random(value_1, value_2) << endl;
    cout << "A pounds to kilograms conversion off of your inputs that were switched: " << PoundsToKilograms(value_1) << "kg" << endl;
    cout << "A kilograms to pounds conversion of of your inputs that were switched: " << KilogramsToPounds(value_2) << "lbs" << endl;
    
    
}