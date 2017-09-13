// Alekzandr Zablockis
// 9/13/2017
// A Stock Portfolio

 #include <iostream>
 using namespace std;
 
 struct stock_portfolio {                                                       // For object of the program
     string stock_name;
     string sector;
     float current_share_price;
     int num_shares_owned;
 };
 
 int main()
  {
      string A = "Auto Companies";
      string C = "Consumer Products";
      string F = "Finacial/Insurance";                                        // Stock Sectors are referred to by a single character according to a code 
      string I = "Industrial ";
      string T = "Technology";
      
      
      stock_portfolio test;
      
      cout << "Enter Stock Name: ";                         
      cin >> test.stock_name;
      cout << "Enter Stock Sector: ";
      cin >> test.sector;                                                     // Tells the user and has the user input stock port_portfolio data
      cout << "Enter Current Share Price: ";
      cin >> test.current_share_price;
      cout << "Enter Number of Shares Owned: ";
      cin >> test.num_shares_owned;
      cout << endl << endl << endl;
      
      
      
      stock_portfolio test1;
      
      cout << "Enter Stock Name: ";                         
      cin >> test1.stock_name;                      
      cout << "Enter Stock Sector: ";
      cin >> test1.sector;                                         
      cout << "Enter Current Share Price: ";
      cin >> test1.current_share_price;
      cout << "Enter Number of Shares Owned: ";
      cin >> test1.num_shares_owned;
      cout << endl << endl << endl;
      
      
      
      stock_portfolio test2;
      
      cout << "Enter Stock Name: ";                         
      cin >> test2.stock_name;
      cout << "Enter Stock Sector: ";
      cin >> test2.sector;                                          
      cout << "Enter Current Share Price: ";
      cin >> test2.current_share_price;
      cout << "Enter Number of Shares Owned: ";
      cin >> test2.num_shares_owned;
      cout << endl << endl << endl;
      
      
      
      stock_portfolio test3;
      
      cout << "Enter Stock Name: ";                         
      cin >> test3.stock_name;
      cout << "Enter Stock Sector: ";
      cin >> test3.sector;                                    
      cout << "Enter Current Share Price: ";
      cin >> test3.current_share_price;
      cout << "Enter Number of Shares Owned: ";
      cin >> test3.num_shares_owned;
      cout << endl << endl << endl;
      
      
      
      float total_value = (test.current_share_price * test.num_shares_owned);  
      float total_value1 = (test1.current_share_price * test1.num_shares_owned);
      float total_value2 = (test2.current_share_price * test2.num_shares_owned);     // Our equations to determine total value of the portfolio
      float total_value3 = (test3.current_share_price * test3.num_shares_owned);
      float total_portfolio = (total_value + total_value1 + total_value2 + total_value3);
     
     
     
      cout << "Stock Name: " << test.stock_name << endl;
      cout << "No. of Shares: " << test.num_shares_owned << endl;
      cout << "Current Share Value: " << test.current_share_price << endl;     // Outputting the data to the user
      cout << "Total Value: $" << total_value << endl;
      cout << endl;
      
      cout << "Stock Name: " << test1.stock_name << endl;
      cout << "No. of Shares: " << test1.num_shares_owned;
      cout << "Current Share Value: " << test1.current_share_price << endl;     
      cout << "Total Value: $" << total_value1 << endl;
      cout << endl;
      
      cout << "Stock Name: " << test2.stock_name << endl;
      cout << "No. of Shares: " << test2.num_shares_owned << endl;
      cout << "Current Share Value: " << test2.current_share_price << endl;     
      cout << "Total Value: $" << total_value2 << endl;
      cout << endl;
      
      cout << "Stock Name: " << test3.stock_name << endl;
      cout << "No. of Shares: " << test3.num_shares_owned << endl;
      cout << "Current Share Value: " << test3.current_share_price << endl;     
      cout << "Total Value: $" << total_value3 << endl;
      cout << endl << endl;
      
      cout << "Total Portfolio: $" << total_portfolio << endl;                  // Value of total portfolio
      
}


/*
Enter Stock Name: Cat
Enter Stock Sector: C
Enter Current Share Price: 4
Enter Number of Shares Owned: 4



Enter Stock Name: Rat
Enter Stock Sector: R
Enter Current Share Price: 3
Enter Number of Shares Owned: 3



Enter Stock Name: Bat
Enter Stock Sector: B
Enter Current Share Price: 2
Enter Number of Shares Owned: 2



Stock Name: Dog
No. of Shares: 5
Current Share Value: 5
Total Value: $25

Stock Name: Cat
No. of Shares: 4Current Share Value: 4
Total Value: $16

Stock Name: Rat
No. of Shares: 3
Current Share Value: 3
Total Value: $9

Stock Name: Bat
No. of Shares: 2
Current Share Value: 2
Total Value: $4


Total Portfolio: $54
*/