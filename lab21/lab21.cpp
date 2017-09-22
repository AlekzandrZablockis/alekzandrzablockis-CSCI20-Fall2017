// Alekzandr Zablockis
// 9/20/2017
// This program will measure the effectivesness of two windchills and the difference between them

 #include <iostream>
 #include <stdio.h>
 #include <math.h>
 using namespace std;
 
 int main()
 {
    double velocity, result;
    velocity = 0;
    result = sqrt (velocity);
    
    double tempF = 0;
    
    cout << "Please enter the tempature: ";
    cin >> tempF;
    cout << "Please enter the starting wind speed: ";
    cin >> velocity;
    
    double velocity_pow = pow (velocity, 0.16);

    double OldStyleWindChill = 0.081 * (3.71 * sqrt (velocity) + 5.81 - 0.25 * velocity) * (tempF - 91.4) + 91.4;
    double NewStyleWindChill = 35.74 + 0.6215 * tempF - 35.75 * velocity_pow + 0.4275 * tempF * velocity_pow;
    
    cout << "Wind Speed: " << velocity << endl;
    cout << "Old Formula: " << OldStyleWindChill << endl;
    cout << "New Formula: " << NewStyleWindChill << endl;
    cout << "Difference: " << OldStyleWindChill - NewStyleWindChill << endl;
}