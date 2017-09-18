// Alekzandr Zablockis
// 9/6/2017
// The program is for a cointstar machine where the customer adds change to get back a ticket stub to turn in for cash

 #include <iostream>
 #include <iomanip>
 using namespace std;
 
 int main()
  {
     int customer_change = 0;                                                         //Change the customer puts in
     int quarters = 0; 
     int dimes = 0;
     int nickles = 0;                                                                    // Place holders so we can determine the change based on the customers input      
     int pennies =0;
     
     
     
     cin >> customer_change;                                                              //This is where the customer inputs their change
     cout << "You have entered " << customer_change;                                                        
     cout << " Cents" << endl;
     
     
     float total_change = customer_change - (customer_change * .109);                     //These floats are so we can print the end result as with decimal values
     float customer_change_float = customer_change;
     quarters = customer_change / 25;                                                   
     dimes = (customer_change % 25) / 10;                                                 //Determines the number of q, d , n , p 
     nickles = ((customer_change % 25) % 10) / 5;
     pennies = (((customer_change % 25) % 10) % 5) /1;
     
     
     
     cout << "That was " << quarters << " Quarters, " << dimes << " Dimes, " << nickles << " Nickles and, " << pennies << " Pennies." << endl;          //Prints the number of q, d, n, p to the user
     cout << "The total is $" << customer_change_float / 100 << " After the fee you get $";
     cout << setprecision(2) << fixed << total_change / 100;                                  //Set precision lets us cut off the decimal point to the 100ths place so it can match US Currency
     cout << " in cash";
}