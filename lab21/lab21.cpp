// Alekzandr Zablockis
// 9/20/2017
// This program will measure the effectivesness of two windchills and the difference between them in tempature

 #include <iostream>
 #include <stdio.h>             
 #include <math.h>                            // Allows us to use the exponent function
 using namespace std;
 
 int main()
 {
    double velocity = 0;                        // Place holder values
    double tempF = 0;
    
    cout << "Please enter the tempature: ";
    cin >> tempF;                                              // Tells the user what to put in
    cout << "Please enter the starting wind speed: ";
    cin >> velocity;
    
    double velocity_pow = pow (velocity, 0.16);

    double OldStyleWindChill = 0.081 * (3.71 * sqrt (velocity) + 5.81 - 0.25 * velocity) * (tempF - 91.4) + 91.4;       // My equations for oldstyle and new style wind chills
    double NewStyleWindChill = 35.74 + 0.6215 * tempF - 35.75 * velocity_pow + 0.4275 * tempF * velocity_pow;
    
    cout << "Wind Speed: " << velocity << endl;
    cout << "Old Formula: " << OldStyleWindChill << endl;
    cout << "New Formula: " << NewStyleWindChill << endl;                                                               // Output to the user
    cout << "Difference: " << OldStyleWindChill - NewStyleWindChill << endl;
}

/*

Wind Speed: 4
Old Formula: 30.5753
New Formula: 25.767
Difference: 4.8083

Wind Speed: 10
Old Formula: 27.8601
New Formula: 32.713
Difference: -4.85286

Wind Speed: 2
Old Formula: 98.7538
New Formula: 105.711
Difference: -6.95719



*/




