// Alekzandr Zablockis
// 10/10/17
// This program will take two numbers and switch them around. Then it will create a random number inbetween those two values as the range. This random number will then be outputted to the user.

#include <iostream> 
#include <ctime> // Allows us to use the time() command so we can create a truly random number using a seed
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

    int Random(int num_1, int num_2) 
{
        Switch(num_1, num_2);    
        srand(time(0));                 
        return rand()%(num_1 - num_2) + num_2;    
}
    int main ()            
{
    cout << "A random number between 1 and 10 is: " << endl;      // Displaying to the user what the range of the next outputs is from
    cout << Random(1, 10) << endl;                                // Our function creating the random number that is outputed to the user
    cout << "A random number between 5 and 82 is: " << endl;      // Displaying to the user what the range of the next outputs is from
    cout << Random(5, 82) << endl;                                // Our function creating the random number that is outputed to the user
    cout << "A random number between 22 and 73 is: " << endl;     // Displaying to the user what the range of the next outputs is from
    cout << Random(22, 73) << endl;                               // Our function creating the random number that is outputed to the user
              
    


    }