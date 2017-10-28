// ALekzandr Zablockis
// 10/18/17
// Create a random number guessing game between 1 and 50. Have the user input a number if it is not valid tell them and then have them reinput a valid number. Check to see if the number is the randomly guessed number.
// If not tell the user whether it was too high or too low and have them guess again. When it is correct say "Just Right" then end the program. Before telling the user whether they are right or wrong have a countdown from 5 to build suspense.


#include <iostream>
#include <string>
#include <ctime> // Allows us to use time() command
using namespace std;

int main ()
{
    srand(time(0)); // Unique seed for random number generator
    
    
    int user_guess = 0;                    // Placeholder
    int random_number = (rand() % 50 + 1); // Randomnumber
    int countdown = 5;                     // Variable needed for our countdown loop
    
    
    
    cout << "Guess a random number between 1 and 50!" << endl;                 
    cin >> user_guess;                                           // User instruction and input
    while ((user_guess < 1) || (user_guess > 50)) 
    {
        cout << "That is an invalidl input. Please put in a different number." << endl;           // Loop for invalid inputs instructer user to put in a valid input
        cin >> user_guess;
    }
    
    
    
    while (user_guess != random_number)   // Loop for when the guess is incorrect
    {
        if (user_guess > random_number) // What happens when the guess is too high when its incorrect
        {                                   
            while (countdown > 0)  // Countdown loop
            {
            cout << countdown << endl;
            countdown--;
            }
            cout << "Too high. Guess Again." << endl;
            cin >> user_guess;
        }
        else if (user_guess < random_number)   // What happens when the guess is too low when its incorrect
        {
            while (countdown > 0) // Countdown loop
            {
            cout << countdown << endl;
            countdown--;
            }
            cout << "Too low. Guess Again." << endl;
            cin >> user_guess;
        }
    }
    
    
    
    while (countdown > 0) 
            {
            cout << countdown << endl;            // Countdown loop
            countdown--;
            }
    cout << "Just Right" << endl; // What happens when the guess is correct
}