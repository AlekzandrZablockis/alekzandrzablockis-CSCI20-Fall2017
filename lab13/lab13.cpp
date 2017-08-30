// Alekzandr Zablockis
// 8/28/17
// World Population Prediction
 #include <iostream>
 using namespace std;
 
 int main()
 {
 int year_in_future = 99;  //Variables based on current data from https://www.census.gov/popclock/ June 4th, 2017
 int sec_in_year = 1*365*24*60*60;
 int us_pop_year =  sec_in_year/12;
 int us_current_pop = 325365189;
 

     cout << "In the year " << 2017 + year_in_future; //Determines year of prediction
     cout << " the population will be " << us_current_pop + (us_pop_year * year_in_future); //Math to determine population of prediction
     cout << " in the United States.";
     
 }
  // This is wrong but we worked on it in class and you told me to just write that we tried to fix it but neither of us could figure it out. It should be a negative number.