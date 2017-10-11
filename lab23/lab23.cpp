// Alekzandr Zablockis
// 9/27/17
// 

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

    int Random(int num_1, int num_2) 
{
        Switch(num_1, num_2);    
        srand(time(0));                 
        return rand()%(num_1 - num_2) + num_2;    
}
    int main ()            
{
    cout << "A random number between 1 and 10 is: " << endl;
    cout << Random(1, 10) << endl; 
    cout << "A random number between 5 and 82 is: " << endl;
    cout << Random(5, 82) << endl;  
    cout << "A random number between 22 and 73 is: " << endl;
    cout << Random(22, 73) << endl; 
              
    


    }