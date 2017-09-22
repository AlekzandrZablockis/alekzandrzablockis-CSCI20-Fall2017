// Alekzandr Zablockis
// 9/14/2017
// Jet Acceleration Finder
 #include <iostream>
 using namespace std;
 
 struct jet_fighter {                                                 // The struct is for our object to determine the jet fighters acceleration
  double acceleration;                                                 
  double take_off_speed;
  double distance;
  double time;
  };
  
 int main()
  {
      jet_fighter data;                                              // Declares our object
      
      
      cout << "Enter Take Off Speed in Km/per Hour: ";
      cin >> data.take_off_speed;                                    // Tells and has the user input the specific data
      cout << "Enter Distance in Meters: ";
      cin >> data.distance;
      
      float meters_per_sec = (data.take_off_speed * 1000)/3600;      
      
      data.time = data.distance * (1/meters_per_sec);                // The equtions and variables to let us determine acceleration
      
      data.acceleration = meters_per_sec / data.time;
      
      
      cout << "The Acceleration of the Jet Fighter is: ";            // Outputs the acceleration to the user
      cout << data.acceleration << "m/^s" << endl;
      cout << "The time to Take Off is: " << data.time << " Seconds";
      
 }
 
 /* 
   Enter Take Off Speed in Km/per Hour: 278
   Enter Distance in Meters: 92
   The Acceleration of the Jet Fighter is: 64.8182m/^s
   The time to Take Off is: 1.19137 Seconds
   
   Enter Take Off Speed in Km/per Hour: 278
   Enter Distance in Meters: 700
   The Acceleration of the Jet Fighter is: 8.51896m/^s
   The time to Take Off is: 9.06475 Seconds
   
   Enter Take Off Speed in Km/per Hour: 200
   Enter Distance in Meters: 60
   The Acceleration of the Jet Fighter is: 51.4403m/^s
   The time to Take Off is: 1.08 Seconds
   
   Enter Take Off Speed in Km/per Hour: 100
   Enter Distance in Meters: 700
   The Acceleration of the Jet Fighter is: 1.10229m/^s
   The time to Take Off is: 25.2 Seconds
 */
 