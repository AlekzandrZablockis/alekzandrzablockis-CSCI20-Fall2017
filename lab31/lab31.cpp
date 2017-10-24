// Alekzandr Zablockis
// 10/10/2017
// 

 #include <iostream>
 #include <string>
 using namespace std;
 
 /*
 This classes purpose is to keep functions organized and have less lines of code for declaring variables that are in the private.
 This classs is used whenever using the programs functions.
 You use this class by declaring an object to use the functions from that object.
 */
 class PhonePlan {
  public:
  int AttUnlimitedChoicePlan (int smartphones, int dumbphones, int tablets, int data_gigs);
  int AttFamilyPlan (int smartphones, int dumbphones, int tablets, int data_gigs);
  int VerizonUnlimited (int smartphones, int dumbphones, int tablets, int data_gigs);            // Declaring all the functions that will be within the class
  int SprintUnlimited ( int smartphones, int dumbphones, int tablets, int data_gigs);
  int Sprint2GbPlan (int smartphones, int dumbphones, int tablets, int data_gigs);
  private:
  int smartphones;
  int dumbphones;
  int phones_price;                      // All the variables that will be within the functions of the class
  int tablets;
  int tablets_price;
  int data_gigs;
  int data_gigs_price;
 };
 
 /*
 This function determines the cost of the ATT Unlimited Choice Phone Plan.
 The functions inputs is the number of smartphones, dumhphones, tablets and gigabytes per month that the user desires.
 The function outputs the cost of the plan based off of the inputs.
 */
 int PhonePlan::AttUnlimitedChoicePlan (int smartphones, int dumbphones, int tablets, int data_gigs)
 {
   int phones = (smartphones + dumbphones);
   int total_price = 0;
   
   if (phones == 0) {
    phones_price = 0;
   }
   else if (phones == 1) {
    phones_price = 60;
   }
   else if (phones == 2) {
    phones_price = 115;
   }
   else if (phones > 2) {
    phones_price = (((phones - 2) * 20) + 115);                                  // If else statements to determine the total_price of the plan based off of the user inputs
   }
   
   if (tablets == 0) {
     tablets_price = 0;
   }
   else if (tablets >= 1) {
     tablets_price = (tablets * 10);
   }
   
   if (data_gigs) {
   data_gigs_price = 0;
   }
   total_price = (phones_price + tablets_price + data_gigs_price);
   
   cout << "AttUnlimitedChoicePlan: " << total_price << "$" << endl;
  
 }
 
 /*
 This function determines the cost of the ATT Family Phone Plan.
 The functions inputs is the number of smartphones, dumhphones, tablets and gigabytes per month that the user desires.
 The function outputs the cost of the plan based off of the inputs.
 */
int PhonePlan::AttFamilyPlan(int smartphones, int dumbphones, int tablets, int data_gigs) {
 int phones = (smartphones + dumbphones);
 int total_price = 0;
 
 if (phones) {
  phones_price = (phones * 20);
}

if (tablets) {
  tablets_price = (tablets * 10);
}

if (data_gigs == 1) {
  data_gigs_price = 30;
}
else if (data_gigs > 1 && data_gigs < 4 ) {
  data_gigs_price = 40;
}
else if (data_gigs > 3 && data_gigs < 7 ) {                                     // If else statements to determine the total_price of the plan based off of the user inputs
 data_gigs_price = 60;
}
else if (data_gigs > 6 && data_gigs < 11 ) {
 data_gigs_price = 80;
}
else if (data_gigs > 10 && data_gigs < 17 ) {
 data_gigs_price  = 90;
}
else if (data_gigs > 16) {
 data_gigs_price = 110;
}

total_price = (phones_price + tablets_price + data_gigs_price);

cout << "AttFamilyPlan: " << total_price << "$" << endl;
}

 /*
 This function determines the cost of the Verizon Unlimited Phone Plan.
 The functions inputs is the number of smartphones, dumhphones, tablets and gigabytes per month that the user desires.
 The function outputs the cost of the plan based off of the inputs.
 */
int PhonePlan::VerizonUnlimited(int smartphones, int dumbphones, int tablets, int data_gigs)
{
 int phones = (smartphones + dumbphones);
 int total_price = 0;
 if (phones == 1) {
  phones_price = ((phones * 20) + 80);
 }
 else if (phones > 1) {
  phones_price = ((phones * 20) + 110);
 }
 
 if (tablets) {                                                                    // If else statements to determine the total_price of the plan based off of the user inputs
  tablets_price = (tablets * 10);
 }
 
 if (data_gigs) {
  data_gigs_price = 0;
 }
 
 total_price = (phones_price + tablets_price + data_gigs_price);
 
 cout << "VerizonUnlimited: " << total_price << "$" << endl;
}

 /*
 This function determines the cost of the Sprint Unlimited Phone Plan.
 The functions inputs is the number of smartphones, dumhphones, tablets and gigabytes per month that the user desires.
 The function outputs the cost of the plan based off of the inputs.
 */ 
int PhonePlan::SprintUnlimited (int smartphones, int dumbphones, int tablets, int data_gigs)
{
 int phones = (smartphones + dumbphones);
 int total_price = 0;
 
 if (phones == 1) {
  phones_price = 60;
 }
 else if (phones == 2) {
  phones_price = 100;
 }
 else if (phones > 2) {
  phones_price = (((phones - 2) * 30) + 100);
 }
                                                                                // If else statements to determine the total_price of the plan based off of the user inputs 
 if (tablets) {
  tablets_price = 0;
 }
 
 if (data_gigs) {
  data_gigs_price = 0;
 }
 total_price = (phones_price + tablets_price + data_gigs_price);
 cout << "SprintUnlimited: " << total_price << "$" << endl;
} 

 /*
 This function determines the cost of the Sprint 2GB Phone Plan.
 The functions inputs is the number of smartphones, dumhphones, tablets and gigabytes per month that the user desires.
 The function outputs the cost of the plan based off of the inputs.
 */
int PhonePlan::Sprint2GbPlan (int smartphones, int dumbphones, int tablets, int data_gigs)
{
 int phones = (smartphones + dumbphones);
 int total_price = 0;
 if (phones) {
  phones_price = (phones * 40);
 }
 
 if (tablets) {
  tablets_price = 0;
 }
 
 if (data_gigs <= 2) {                                                          // If else statements to determine the total_price of the plan based off of the user inputs
  data_gigs_price = 0;
 }
 else if (data_gigs > 2) {
  cout << "Sprint2GbPlan: " << "N/A" << endl;
  return 0;
 }
 total_price = (phones_price + tablets_price + data_gigs_price);
 cout << "Sprint2GbPlan: " << total_price << "$" << endl;
}


 
 
int main () {
    int num_smartphones = 0;
    int num_dumbphones = 0;                  // Place holder values
    int num_tablets = 0;
    int num_data_gigs = 0;
    
    PhonePlan BP; 
    cout << "Enter the number of smartphones that will be on your plan:" << endl;
    cin >> num_smartphones;
    cout << "Enter the number of dumbphones that will be on your plan:" << endl;
    cin >> num_dumbphones;                                                        // Instructs and has user input values to determine best smartphone plan
    cout << "Enter the number of tablets that will be on your plan:" << endl;
    cin >> num_tablets;
    cout << "Enter the amount of data in gigabytes that will be on your plan:" << endl;
    cin >> num_data_gigs;
    cout << endl << endl << endl;
    
    cout << "These are the prices of all avaible phone plans. The lowest price is the best choice" << endl << endl;
    
    BP.AttUnlimitedChoicePlan(num_smartphones, num_dumbphones, num_tablets, num_data_gigs);
    BP.AttFamilyPlan(num_smartphones, num_dumbphones, num_tablets, num_data_gigs );
    BP.VerizonUnlimited(num_smartphones, num_dumbphones, num_tablets, num_data_gigs);                                   // Functions are called to take the user inputs to give the output of all of the plans prices to show which one is the lowest for the user to pick
    BP.SprintUnlimited(num_smartphones, num_dumbphones, num_tablets, num_data_gigs);
    BP.Sprint2GbPlan(num_smartphones, num_dumbphones, num_tablets, num_data_gigs); 
   

}
    
/*
TEST 1
These are the prices of all avaible phone plans. The lowest price is the best choice

AttUnlimitedChoicePlan: 115$
AttFamilyPlan: 100$
VerizonUnlimited: 150$
SprintUnlimited: 100$
Sprint2GbPlan: N/A


Process exited with code: 0

TEST 2
These are the prices of all avaible phone plans. The lowest price is the best choice

AttUnlimitedChoicePlan: 145$
AttFamilyPlan: 160$
VerizonUnlimited: 180$
SprintUnlimited: 130$
Sprint2GbPlan: N/A


Process exited with code: 0

TEST 3



*/













