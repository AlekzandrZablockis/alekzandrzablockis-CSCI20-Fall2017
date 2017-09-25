// Alekzandr Zablockis
// 9/25/17
// This program will randomly generate a number inbetween 1 and 100

#include <iostream>
#include <cstdlib>          // Allows me to use rand() function
#include <ctime>            // Allows me to use time() function
using namespace std;

int main()
{
    srand(time(0));                             // Lets the random number use a seed to be random    
    double random_number = (rand() % 100) + 1;  // Declaring my variable with a random number equation
    cout << "Your Random Number is: " << random_number << endl;              // Printing my random number
}