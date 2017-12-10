// Alekzandr Zablockis
// 11/18/17
// This program will mimic an online shopping cart. It will keep track of inventory, price and the users shopping cart. It will have a class that holds the object names, price and inventories.
// As the user purchases items it will remove 1 from that items iventory and add the price to the total. IT will never allow the inventory to go below 0.

#include <iostream>
#include <string>
#include <limits> // Lets use use commands to prevent out infinite loop from the switch case
using namespace std;

/*
The purose of this class is create our array of objects and shared funcitons/variables between them. We also use our default consturctor to set the defaults for the objects.
*/
class ShoppingCart
{
    public:
    void GetItemName();
    void SetItem(string new_name, double new_price, int new_curent_inventory);
    ShoppingCart();
    string name;
    double price;
    int current_inventory;
    int total_ordered;
};

ShoppingCart::ShoppingCart()
{
    name = "NoName";
    price = 0;
    current_inventory = 0;
    total_ordered = 0;
}


/*
The purpose of this funciton is to set the items name, price and inventory
The input is the items name, price and inventory
The output is none
*/
void ShoppingCart::SetItem(string new_name, double new_price, int new_current_inventory)
{
    name = new_name;
    price = new_price;
    current_inventory = new_current_inventory;
}

/*
The purpose of this function is to output the name of the item
The input is none
The output is the items
*/
void ShoppingCart::GetItemName()
{
    cout << name << endl;
}



int main ()
{
    int choice = 0;
    int i = 0;
    
    
    
    ShoppingCart item[5];
    item[0].SetItem("Dog", 500, 5);
    item[1].SetItem("Cat", 400, 20);
    item[2].SetItem("Bird", 250, 10);     // Sets the values of the items for name, price and stock
    item[3].SetItem("Snake", 100, 3);
    item[4].SetItem("Rat", 50, 17);
    
    
    
    
    cout << "Welcome to the Online Pet Store! Here are the pets we have avaible today!" << endl;
    cout << "1. ";
    item[0].GetItemName();
    cout << "2. ";
    item[1].GetItemName();
    cout << "3. ";                                    
    item[2].GetItemName();  // The inital output of what avaible items to the user with item numbers 
    cout << "4. ";
    item[3].GetItemName();
    cout << "5. ";
    item[4].GetItemName();
    
    
    
    
    while (i < 100) // This loops goes until the user checks out of shopping.
    {
        cout << "To order an item please enter the item number. When done ordering please enter 0 to checkout." << endl;
        cin >> choice; 
        
        switch (choice) // The purpose of this switch case is for the to take one away from the stock of the item the user ordered and to add 1 to the amonunt they ordered of that item. It will never allow for stock to go below 0.
        {
            case 1:
                if(item[0].current_inventory >= 1)
                    {
                        item[0].current_inventory = item[0].current_inventory - 1;
                        item[0].total_ordered = item[0].total_ordered + 1;
                    }
                else
                    {
                        cout << "Sorry this item is out of stock we aplogize for the inconvience." << endl;
                    }
                break;
            case 2:
                if(item[1].current_inventory >= 1)
                    {
                        item[1].current_inventory = item[1].current_inventory - 1;
                        item[1].total_ordered = item[1].total_ordered + 1;
                    }
                else
                    {
                        cout << "Sorry this item is out of stock we aplogize for the inconvience." << endl;
                    }
                break;
            case 3:
                if(item[2].current_inventory >= 1)
                    {
                        item[2].current_inventory = item[2].current_inventory - 1;
                        item[2].total_ordered = item[2].total_ordered + 1;
                    }
                else
                    {
                        cout << "Sorry this item is out of stock we aplogize for the inconvience." << endl;
                    }
                break;
            case 4:
                if(item[3].current_inventory >= 1)
                    {
                        item[3].current_inventory = item[3].current_inventory - 1;
                        item[3].total_ordered = item[3].total_ordered + 1;
                    }
                else
                    {
                        cout << "Sorry this item is out of stock we aplogize for the inconvience." << endl;
                    }
                break;
            case 5:
                if(item[4].current_inventory >= 1)
                    {
                        item[4].current_inventory = item[4].current_inventory - 1;
                        item[4].total_ordered = item[4].total_ordered + 1;
                    }
                else
                    {
                        cout << "Sorry this item is out of stock we aplogize for the inconvience." << endl;
                    }
                break;
            case 0:
                i = 500;
                break;
            default:
                break;
        }
        
        while (!(cin >> choice))
            {
                cout << "Invalid input please enter a valid input." << endl;
                cin.clear();                                                    // This prevents the the infinit loop caused by a char input in the switch case 'choice'
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
    }
    
    
    
    cout << "You have ordered the following: " << endl;
    
    if (item[0].total_ordered > 0)
    {
        cout << item[0].total_ordered << " " << item[0].name << " for " << (item[0].total_ordered * item[0].price) << "$" << endl;
    }
    
    if (item[1].total_ordered > 0)
    {
        cout << item[1].total_ordered << " " << item[1].name << " for " << (item[1].total_ordered * item[1].price) << "$" << endl;
    }
    
    if (item[2].total_ordered > 0)
    {
        cout << item[2].total_ordered << " " << item[2].name << " for " << (item[2].total_ordered * item[2].price) << "$" << endl;          // These if statements determine whether or not to output to the user depending on whether or not they ordered the product
    }
    
    if (item[3].total_ordered > 0)
    {
        cout << item[3].total_ordered << " " << item[3].name << " for " << (item[3].total_ordered * item[3].price) << "$" << endl;
    }
    
    if (item[4].total_ordered > 0)
    {
        cout << item[4].total_ordered << " " << item[4].name << " for " << (item[4].total_ordered * item[4].price) << "$" << endl;
    }
    
    cout << "Your total is " << ((item[0].total_ordered * item[0].price) + (item[1].total_ordered * item[1].price) + (item[2].total_ordered * item[2].price) + (item[3].total_ordered * item[3].price) + (item[4].total_ordered * item[4].price)) << "$" << endl; // Equation for total price of all items ordered

}

/*
EXAMPLE
Welcome to the Online Pet Store! Here are the pets we have avaible today!
1. Dog
2. Cat
3. Bird
4. Snake
5. Rat
To order an item please enter the item number. When done ordering please enter 0 to checkout.
1
1
To order an item please enter the item number. When done ordering please enter 0 to checkout.
2
2
To order an item please enter the item number. When done ordering please enter 0 to checkout.
3
3
To order an item please enter the item number. When done ordering please enter 0 to checkout.
4
4
To order an item please enter the item number. When done ordering please enter 0 to checkout.
5
5
To order an item please enter the item number. When done ordering please enter 0 to checkout.
0
0
You have ordered the following: 
1 Dog for 500$
1 Cat for 400$
1 Bird for 250$
1 Snake for 100$
1 Rat for 50$
Your total is 1300$

*/