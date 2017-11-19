// Alekzandr Zablockis
// 11/8/17
// This program will act as a online shopping cart. It will keep track of inventory, price and the users shopping cart. It will have a menue of 10 items for the user to choose from. As the user purchases
// Items it will remove it form the stock of the item and add to the total of the purchase. When the user is finished shopping the program will output what they purchased, how much each item costed and the total cost.
// Inventory will never go below 0 in this program.

#include <iostream>
#include <string>
using namespace std;

class Dispensary
{
    public:
    int Cart();
    string item[10] {"Gorilla Glue","Ak-47","Black Widow","Black Beauty","Black Cherry Soda","Pineapple","Blue Dream","Juicy Fruit","Strawberry Haze","WD-40"};
    int stock[10] {10,10,10,10,10,10,10,10,10,10,};                                                                                                                  // My parallel array
    double price[10] {30,40,40,50,50,30,60,45,50,55};
    int total_stock[10] {0,0,0,0,0,0,0,0,0,0}; // Amount ordered incorrect name
};

int Dispensary::Cart()
{
    int amount_ordered_1 = (total_stock[0] * price[0]);
    int amount_ordered_2 = (total_stock[1] * price[1]);
    int amount_ordered_3 = (total_stock[2] * price[2]);
    int amount_ordered_4 = (total_stock[3] * price[3]);
    int amount_ordered_5 = (total_stock[4] * price[4]);        
    int amount_ordered_6 = (total_stock[5] * price[5]);  // Variables for the equation in the double variable
    int amount_ordered_7 = (total_stock[6] * price[6]);
    int amount_ordered_8 = (total_stock[7] * price[7]);
    int amount_ordered_9 = (total_stock[8] * price[8]);
    int amount_ordered_10 = (total_stock[9] * price[9]);
    
    double total = (amount_ordered_1 + amount_ordered_2 + amount_ordered_3 + amount_ordered_4 + amount_ordered_5 + amount_ordered_5 + amount_ordered_6 + amount_ordered_7 + amount_ordered_8 + amount_ordered_9 + amount_ordered_10); // Equation to determine the total amount of $ the user owes
    cout << "You have ordered:" << endl;
    if (total_stock[0] > 0)
    {
        cout << total_stock[0] << "/8ths of " << item[0] << endl;
    }
    if (total_stock[1] > 0)
    {
        cout << total_stock[1] << "/8ths of " << item[1] << endl;
    }
    if (total_stock[2] > 0)
    {
        cout << total_stock[2] << "/8ths of " << item[2] << endl;
    }
    if (total_stock[3] > 0)
    {
        cout << total_stock[3] << "/8ths of " << item[3] << endl;
    }
    if (total_stock[4] > 0)
    {
        cout << total_stock[4] << "/8ths of " << item[4] << endl;
    }
    if (total_stock[5] > 0)                                        // Multiple if statements incase all or none should happen in checkout
    {
        cout << total_stock[5] << "/8ths of " << item[5] << endl;
    }
    if (total_stock[6] > 0)
    {
        cout << total_stock[6] << "/8ths of " << item[6] << endl;
    }
    if (total_stock[7] > 0)
    {
        cout << total_stock[7] << "/8ths of " << item[7] << endl;
    }
    if (total_stock[8] > 0)
    {
        cout << total_stock[8] << "/8ths of " << item[8] << endl;
    }
    if (total_stock[9] > 0)
    {
        cout << total_stock[9] << "/8ths of " << item[19] << endl;
    }
    cout << "Total Price: " << total << "$";
}


int main()
{
    Dispensary store1;

    int i = 0; // Placeholder
    int choice = 0; // Placeholder for user input for switchcase
    
    
    cout << "Welcome to Online Californian Dispensary! This is our avaible stock!" << endl;
    cout << "1. " << store1.item[0] << " " << store1.price[0] << "$ Per 1/8th" << endl;
    cout << "2. " << store1.item[1] << " " << store1.price[1] << "$ Per 1/8th" << endl;
    cout << "3. " << store1.item[2] << " " << store1.price[2] << "$ Per 1/8th" << endl;
    cout << "4. " << store1.item[3] << " " << store1.price[3] << "$ Per 1/8th" << endl;
    cout << "5. " << store1.item[4] << " " << store1.price[4] << "$ Per 1/8th" << endl;   // Instructs the user on what the program is, the avaible stock of the store and the pprice of each item
    cout << "6. " << store1.item[5] << " " << store1.price[5] << "$ Per 1/8th" << endl;
    cout << "7. " << store1.item[6] << " " << store1.price[6] << "$ Per 1/8th" << endl;
    cout << "8. " << store1.item[7] << " " << store1.price[7] << "$ Per 1/8th" << endl;
    cout << "9. " << store1.item[8] << " " << store1.price[8] << "$ Per 1/8th" << endl;
    cout << "10. " << store1.item[9] << " " << store1.price[9] << "$ Per 1/8th" << endl;
    
    while (i < 100) // This loop runs until the user decides to checkout
    {
        cout << "Please enter the product number to order an 1/8th. Enter 0 when ready to purchase." << endl;  // User instructions
        cin >> choice;
        
        switch (choice) // Switch case for all possible options to purchase, checking out and invalid inputs
        {
            case 1:
                if (store1.stock[0] > 0)
                {
                    store1.stock[0] = store1.stock[0] - 1;
                    store1.total_stock[0] = store1.total_stock[0] + 1;
                }
                else if (store1.stock[0] == 0)
                {
                    cout << "We're sorry but that item is out of stock right now." << endl;
                }
                break;
            case 2:
                if (store1.stock[1] > 0)
                {
                    store1.stock[1] = store1.stock[1] - 1;
                        store1.total_stock[1] = store1.total_stock[1] + 1;
                }
                else if (store1.stock[1] == 0)
                {
                    cout << "We're sorry but that item is out of stock right now." << endl;
                }
                break;
            case 3:
                if (store1.stock[2] > 0)
                {
                    store1.stock[2] = store1.stock[2] - 1;
                    store1.total_stock[2] = store1.total_stock[2] + 1;
                }
                else if (store1.stock[2] == 0)
                {
                    cout << "We're sorry but that item is out of stock right now." << endl;
                }
                break;
            case 4:
                if (store1.stock[3] > 0)
                {
                    store1.stock[3] = store1.stock[3] - 1;
                    store1.total_stock[3] = store1.total_stock[3] + 1;
                }
                else if (store1.stock[3] == 0)
                {
                    cout << "We're sorry but that item is out of stock right now." << endl;
                }
                break;    
            case 5:
                if (store1.stock[4] > 0)
                {
                    store1.stock[4] = store1.stock[4] - 1;
                    store1.total_stock[4] = store1.total_stock[4] + 1;
                }
                else if (store1.stock[4] == 0)
                {
                    cout << "We're sorry but that item is out of stock right now." << endl;
                }
                break;   
            case 6:
                if (store1.stock[5] > 0)
                {
                    store1.stock[5] = store1.stock[5] - 1;
                    store1.total_stock[5] = store1.total_stock[5] + 1;
                }
                else if (store1.stock[5] == 0)
                {
                    cout << "We're sorry but that item is out of stock right now." << endl;
                }
                break;   
            case 7:
                if (store1.stock[6] > 0)
                {
                    store1.stock[6] = store1.stock[6] - 1;
                    store1.total_stock[6] = store1.total_stock[6] + 1;
                }
                else if (store1.stock[6] == 0)
                {
                    cout << "We're sorry but that item is out of stock right now." << endl;
                }
                break;    
            case 8:
                if (store1.stock[7] > 0)
                {
                    store1.stock[7] = store1.stock[7] - 1;
                    store1.total_stock[7] = store1.total_stock[7] + 1;
                }
                else if (store1.stock[7] == 0)
                {
                    cout << "We're sorry but that item is out of stock right now." << endl;
                }
                break;    
            case 9:
                if (store1.stock[8] > 0)
                {
                    store1.stock[8] = store1.stock[8] - 1;
                    store1.total_stock[8] = store1.total_stock[8] + 1;
                }
                else if (store1.stock[8] == 0)
                {
                    cout << "We're sorry but that item is out of stock right now." << endl;
                }
                break;    
            case 10:
                if (store1.stock[9] > 0)
                {
                    store1.stock[9] = store1.stock[9] - 1;
                    store1.total_stock[9] = store1.total_stock[9] + 1;
                }
                else if (store1.stock[9] == 0)
                {
                    cout << "We're sorry but that item is out of stock right now." << endl;
                }
                break;
            case 0:
                i = 500;
                store1.Cart();
                break;
            default:
                cout << "Invalid Input please put in a valid input" << endl;
                break;
        }
    }
}
