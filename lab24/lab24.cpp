// Alekzandr Zablockis
// 10/10/17
// This program will take two user inputs and do three things: It will create a swap the inputs output a random number as the range between the
// numbers. It will take the swapped numbers and consider the first pounds, the second kilograms and then convert pounds to kilograms and output to the user,
// the program will end by outputting the kilograms converted back into pounds

#include <iostream>
#include <ctime> // Allows us to use time() command so we can have a truly random number for our random number generator
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
        return rand()% value_1 + value_2;
}

/* This function takes an input of pounds and converts it into an output of kilograms
    Input is the value for pounds
    Output is the valoue for kilograms */
    
int PoundsToKilograms(double pounds)
{
    double kilograms;
    kilograms = pounds * (1/2.2);
    return kilograms;
}

/*  This funtin takes an input of kilograms and converts it into an output of pouds
    Input is the value for kilograms
    Output is the value for pounds */
    
int KilogramsToPounds (double kilograms)
{
    double pounds;
    pounds = kilograms * 2.2;
}

int main ()
{
    int value_1 = 0;          // Placeholder values
    int value_2 = 0;
    
    

    cout << "Enter a value" << endl;
    cin >> value_1;                               // Instructs and has the user input data
    cout << "Enter another value" << endl;
    cin >> value_2;
    
    int random_number = Random(value_1, value_2);
    cout << "This is a random number between your two values: " << random_number << endl;;
    cout << " This is the conversion of the random number as pounds to kilograms: " << PoundsToKilograms(random_number) << endl;
    int random_number_2 = PoundsToKilograms(random_number);                                                                   // Outputs the random number and conversions to the user
    cout << " This is the conversion of the random number as kilograms to pounds: " << KilogramsToPounds(random_number_2) << endl;
    
    
}


/* 
Enter a value
10
Enter another value
1
This is a random number between your two values: 10
This is the conversion of the random number as pounds to kilograms: 4
This is the conversion of the random number as kilograms to pounds: 8
*/