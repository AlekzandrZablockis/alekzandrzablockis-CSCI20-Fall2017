// Alekzandr Zablockis
// 10/31/17
// This program is the childrens game Hi Ho! Cherry- O


#include <iostream>
#include <ctime> // For srand(time()) function to create truly randomly generated numbers
using namespace std;

/*
The purpose of this class is to have the functions and variables that will all be used by the computer player
*/

class Computer 
{
    public:
    int TakeOneCherry();
    int TakeTwoCherry();
    int TakeThreeCherry();
    int TakeFourCherry();
    int Dog();
    int Bird();
    int SpilledBasket();
    int computer_tree = 10;
    int computer_basket = 0;
};

/*
The purpose of this class is to have the functions and variables that will all be used by the computer player
*/

class Human
{
    public:
    int TakeOneCherry();
    int TakeTwoCherry();
    int TakeThreeCherry();
    int TakeFourCherry();
    int Dog();
    int Bird();
    int SpilledBasket();
    int human_tree = 10;  // Base value
    int human_basket = 0;
};

/*
This function takes one cherry from the human players tree and puts in the human players basket.
There is no input.
The output is 1 cherry is removed from the human players tree and is put in the human players basket.
*/

int Human::TakeOneCherry()
{
    human_tree = (human_tree - 1);
    human_basket = (human_basket + 1);
}

/*This function takes two cherry from the human players tree and puts in the human players basket.
There is no input.
The output is 2 cherry is removed from the human players tree and is put in the human players basket.
*/

int Human::TakeTwoCherry()
{
    human_tree = (human_tree - 2);
    human_basket = (human_basket + 2);
}

/*This function takes three cherry from the human players tree and puts in the human players basket.
There is no input.
The output is 3 cherry is removed from the human players tree and is put in the human players basket.
*/

int Human::TakeThreeCherry()
{
    human_tree = (human_tree - 3);
    human_basket = (human_basket + 3);
}

/*This function takes four cherry from the human players tree and puts in the human players basket.
There is no input.
The output is 4 cherry is removed from the human players tree and is put in the human players basket.
*/

int Human::TakeFourCherry()
{
    human_tree = (human_tree - 4);
    human_basket = (human_basket + 4);
}

/*
This function takes two, one or 0 cherries from the human players basket and puts them back onto the human players tree depending on how many cherries the player has
There is no input
The output is 2,1 or 0 cherry removed from the human players basket and put in the human players tree
*/

int Human::Dog()
{
    if (human_basket == 0)
    {
        human_tree = human_tree;
        human_basket = human_basket;     
    }
    else if (human_basket == 1)
    {
        human_tree = (human_tree + 1);
        human_basket = (human_basket - 1);
    }
    else 
    {
        human_tree = (human_tree + 2);
        human_basket = (human_basket - 2);
    }
}

/*
This function takes two, one or 0 cherries from the human players basket and puts them back onto the human players tree depending on how many cherries the player has
There is no input
The output is 2,1 or 0 cherry removed from the human players basket and put in the human players tree
*/

int Human::Bird()
{
    if (human_basket == 0)
    {
        human_tree = human_tree;
        human_basket = human_basket;
    }
    else if (human_basket == 1)
    {
        human_tree = (human_tree + 1);
        human_basket = (human_basket - 1);
    }
    else 
    {
        human_tree = (human_tree + 2);
        human_basket = (human_basket - 2);
    }
}
/*
This function takes all of the human players cherries and puts them on the human players tree
There is no input
The output is the human players baskets cherries are all put on the human players tree
*/
int Human::SpilledBasket()
{
    human_tree = (human_tree + human_basket);
    human_basket = (human_basket - human_basket);
}

/*
This function takes one cherry from the computer players tree and puts in the computer players basket.
There is no input.
The output is 1 cherry is removed from the computers players tree and is put in the computer players basket.
*/

int Computer::TakeOneCherry()
{
    computer_tree = (computer_tree - 1);
    computer_basket = (computer_basket + 1);
}

/*
This function takes two cherry from the computer players tree and puts in the computer players basket.
There is no input.
The output is 2 cherry is removed from the computers players tree and is put in the computer players basket.
*/


int Computer::TakeTwoCherry()
{
    computer_tree = (computer_tree - 2);
    computer_basket = (computer_basket + 2);
}

/*
This function takes three cherry from the computer players tree and puts in the computer players basket.
There is no input.
The output is 3 cherry is removed from the computers players tree and is put in the computer players basket.
*/


int Computer::TakeThreeCherry()
{
    computer_tree = (computer_tree - 3);
    computer_basket = (computer_basket + 3);
}

/*
This function takes four cherry from the computer players tree and puts in the computer players basket.
There is no input.
The output is 4 cherry is removed from the computers players tree and is put in the computer players basket.
*/


int Computer::TakeFourCherry()
{
    computer_tree = (computer_tree - 4);
    computer_basket = (computer_basket + 4);
}

/*
This function takes two, one or 0 cherries from the computer players basket and puts them back onto the human players tree depending on how many cherries the player has
There is no input
The output is 2,1 or 0 cherry removed from the computer players basket and put in the computer players tree
*/

int Computer::Dog()
{
    if (computer_basket == 0)
    {
        computer_tree = computer_tree;
        computer_basket = computer_basket;
    }
    else if (computer_basket == 1)
    {
        computer_tree = (computer_tree + 1);
        computer_basket = (computer_basket - 1);
    }
    else 
    {
        computer_tree = (computer_tree + 2);
        computer_basket = (computer_basket - 2);
    }
}

/*
This function takes two, one or 0 cherries from the computer players basket and puts them back onto the human players tree depending on how many cherries the player has
There is no input
The output is 2,1 or 0 cherry removed from the computer players basket and put in the computer players tree
*/

int Computer::Bird()
{
    
    if (computer_basket == 0)
    {
        computer_tree = computer_tree;
        computer_basket = computer_basket;
    }
    else if (computer_tree== 1)
    {
        computer_tree = (computer_tree + 1);
        computer_basket = (computer_basket - 1);
    }
    else 
    {
        computer_tree = (computer_tree + 2);
        computer_basket = (computer_basket - 2);
    }
}

/*
This function takes all of the human players cherries and puts them on the human players tree
There is no input
The output is the human players baskets cherries are all put on the human players tree
*/

int Computer::SpilledBasket()
{
    computer_tree = (computer_tree + computer_basket);
    computer_basket = (computer_basket - computer_basket);
}

int main()
{
    Human human1;          // The objects needed for the game
    Computer computer1;
    
    char spin = ' ';       // Place Holder values
    int spin_result = 0;
    
    srand(time(0));      // Allows us to have truly random generated numbers
    
    
  
    while (human1.human_tree > 0 && computer1.computer_tree > 0) // This loop loops our game until someone wins
    {
        cout << "It is your turn!" << endl;
        cout << "Your tree has " << human1.human_tree << " cherries on it." << endl;
        cout << "Your basket has " << human1.human_basket << " cherries in it." << endl << endl;;
        cout << "Enter S to spin the spinner" << endl;
        cin >> spin;
        cout << endl;
      
        /*
        This switch takes a user input to create a random generated number
        The input is two possible char's from the user
        The output is that spin_result equals a randomly generated number
        */
        switch(spin)
        {
            case 's':                         
            case 'S':
                spin_result = rand() % 7 + 1;
                break;
        }
        
        /*
        This switch allows us to use our randomly generated input to select a function at random to use
        The input for this is the spin result which is a randomly generated number
        The output is one of the 7 functions randomly selected
        */
        switch(spin_result)
        {
            case 1:
            cout << "You spun onto the take one cherry spot! You take one Cherry!" << endl; 
            human1.TakeOneCherry();
            cout << endl;
            break;
            
            case 2:
            cout << "You spun onto the take two cherry spot! You take two Cherries!" << endl;
            human1.TakeTwoCherry();
            cout << endl;
            break;
            
            case 3:
            cout << "You spun onto the take three cherry spot! You take three Cherries!" << endl;
            human1.TakeThreeCherry();
            cout << endl;
            break;
            
            case 4:
            cout << "You spun onto the take 4 cherry spot! You take four Cherries!" << endl;
            human1.TakeOneCherry();
            cout << endl;
            break;
            
            case 5:
            if (human1.human_basket == 0)
            {
                cout << "You spun onto the dog spot but you have no cherries!" << endl;
            }
            else if (human1.human_basket == 1)
            {
                cout << "You spun onto to the dog spot! You lose on cherry!" << endl;
                human1.Dog();
            }
            else 
            {
                cout << "You spun onto to the dog spot! You lose two cherries!" << endl;
                human1.Dog();
            }
            cout << endl;
            break;
            
            case 6:
            if (human1.human_basket == 0)
            {
                cout << "You spun onto the bird spot but you have no cherries!" << endl;
            }
            else if (human1.human_basket == 1)
            {
                cout << "You spun onto to the bird spot! You lose one cherry!" << endl;
                human1.Bird();
            }
            else 
            {
                cout << "You spun onto to the bird spot! You lose two cherries!" << endl;
                human1.Bird();
            }
            cout << endl;
            break;
            
            case 7:
            cout << "Oops! You spilt all of your cherries!" << endl;
            human1.SpilledBasket();
            cout << endl;
            break;
            
            default:
            break;
        }
        
        
        cout << "It is the computers turn!" << endl;
        cout << "The computers tree has " << computer1.computer_tree << " cherries on it." << endl;
        cout << "The computers basket has " << computer1.computer_basket << " cherries in it." << endl;
        
        
        spin_result = rand() % 7 + 1; // Sets a randomly generated number to spin_result to be used in our switch
        
         /*
        This switch allows us to use our randomly generated input to select a function at random to use
        The input for this is the spin result which is a randomly generated number
        The output is one of the 7 functions randomly selected
        */ 
         switch(spin_result)
        {
            case 1:
            cout << "The computer spun onto the take one cherry spot! The computer takes one Cherry!" << endl; 
            computer1.TakeOneCherry();
            cout << endl;
            break;
            
            case 2:
            cout << "The computer spun onto the take two cherry spot! The computer takes two Cherries!" << endl;
            computer1.TakeTwoCherry();
            cout << endl;
            break;
            
            case 3:
            cout << "The computer spun onto the take three cherry spot! The computer takes three Cherries!" << endl;
            computer1.TakeThreeCherry();
            cout << endl;
            break;
            
            case 4:
            cout << "The computer spun onto the take 4 cherry spot! The computer takes four Cherries!" << endl;
            computer1.TakeOneCherry();
            cout << endl;
            break;
            
            case 5:
            if (computer1.computer_basket == 0)
            {
                cout << "The computer spun onto the dog spot but it has no cherries!" << endl;
            }
            else if (computer1.computer_basket == 1)
            {
                cout << "The computer spun onto to the dog spot! The computer loses on cherry!" << endl;
                computer1.Dog();
            }
            else 
            {
                cout << "The computer spun onto to the dog spot! The computer loses two cherries!" << endl;
                computer1.Dog();
            }
            cout << endl;
            break;
            
            case 6:
            if (computer1.computer_basket == 0)
            {
                cout << "The computer spun onto the bird spot but it has no cherries!" << endl;
            }
            else if (computer1.computer_basket == 1)
            {
                cout << "The computer spun onto to the bird spot! The computer loses one cherry!" << endl;
                computer1.Bird();
            }
            else 
            {
                cout << "The computer spun onto to the bird spot! The computer loses two cherries!" << endl;
                computer1.Bird();
            }
            cout << endl;
            break;
            
            case 7:
            cout << "Oops! The computer spilt all of its cherries!" << endl;
            computer1.SpilledBasket();
            cout << endl;
            break;
            
            default:
            break;
        }
    } 

    if (human1.human_basket >= 10) // Tells the user if they won the game
    {
        cout << "Cogratulations you picked all your cherries and won the game!" << endl;   
    }
    else if (computer1.computer_basket >= 10) // Tells the user if they lost the game
    {
        cout << "The computer has picked all of its cherries and won the game!" << endl;
        cout << "u r rly bad get gud at teh game" << " gg no re :3" << endl; // Lets them know how bad they are at video games. 
    }

}

/* 
OUTPUT 1: THE WIN
Running /home/ubuntu/workspace/lab30/lab30.cpp
It is your turn!
Your tree has 10 cherries on it.
Your basket has 0 cherries in it.

Enter S to spin the spinner
s

You spun onto the take three cherry spot! You take three Cherries!

It is the computers turn!
The computers tree has 10 cherries on it.
The computers basket has 0 cherries in it.
Oops! The computer spilt all of its cherries!

It is your turn!
Your tree has 7 cherries on it.
Your basket has 3 cherries in it.

Enter S to spin the spinner
s

You spun onto the take one cherry spot! You take one Cherry!

It is the computers turn!
The computers tree has 10 cherries on it.
The computers basket has 0 cherries in it.
The computer spun onto the take one cherry spot! The computer takes one Cherry!

It is your turn!
Your tree has 6 cherries on it.
Your basket has 4 cherries in it.

Enter S to spin the spinner
s

You spun onto the take three cherry spot! You take three Cherries!

It is the computers turn!
The computers tree has 9 cherries on it.
The computers basket has 1 cherries in it.
The computer spun onto the take two cherry spot! The computer takes two Cherries!

It is your turn!
Your tree has 3 cherries on it.
Your basket has 7 cherries in it.

Enter S to spin the spinner
s

Oops! You spilt all of your cherries!

It is the computers turn!
The computers tree has 7 cherries on it.
The computers basket has 3 cherries in it.
The computer spun onto to the dog spot! The computer loses two cherries!

It is your turn!
Your tree has 10 cherries on it.
Your basket has 0 cherries in it.

Enter S to spin the spinner
s

You spun onto the take one cherry spot! You take one Cherry!

It is the computers turn!
The computers tree has 9 cherries on it.
The computers basket has 1 cherries in it.
Oops! The computer spilt all of its cherries!

It is your turn!
Your tree has 9 cherries on it.
Your basket has 1 cherries in it.

Enter S to spin the spinner
s

You spun onto the take two cherry spot! You take two Cherries!

It is the computers turn!
The computers tree has 10 cherries on it.
The computers basket has 0 cherries in it.
The computer spun onto the bird spot but it has no cherries!

It is your turn!
Your tree has 7 cherries on it.
Your basket has 3 cherries in it.

Enter S to spin the spinner
s

You spun onto to the dog spot! You lose two cherries!

It is the computers turn!
The computers tree has 10 cherries on it.
The computers basket has 0 cherries in it.
The computer spun onto the take two cherry spot! The computer takes two Cherries!

It is your turn!
Your tree has 9 cherries on it.
Your basket has 1 cherries in it.

Enter S to spin the spinner
s

You spun onto the take three cherry spot! You take three Cherries!

It is the computers turn!
The computers tree has 8 cherries on it.
The computers basket has 2 cherries in it.
Oops! The computer spilt all of its cherries!

It is your turn!
Your tree has 6 cherries on it.
Your basket has 4 cherries in it.

Enter S to spin the spinner
s

You spun onto to the bird spot! You lose two cherries!

It is the computers turn!
The computers tree has 10 cherries on it.
The computers basket has 0 cherries in it.
The computer spun onto the take three cherry spot! The computer takes three Cherries!

It is your turn!
Your tree has 8 cherries on it.
Your basket has 2 cherries in it.

Enter S to spin the spinner
s

You spun onto the take two cherry spot! You take two Cherries!

It is the computers turn!
The computers tree has 7 cherries on it.
The computers basket has 3 cherries in it.
The computer spun onto the take 4 cherry spot! The computer takes four Cherries!

It is your turn!
Your tree has 6 cherries on it.
Your basket has 4 cherries in it.

Enter S to spin the spinner
s

Oops! You spilt all of your cherries!

It is the computers turn!
The computers tree has 6 cherries on it.
The computers basket has 4 cherries in it.
The computer spun onto the take 4 cherry spot! The computer takes four Cherries!

It is your turn!
Your tree has 10 cherries on it.
Your basket has 0 cherries in it.

Enter S to spin the spinner
s

Oops! You spilt all of your cherries!

It is the computers turn!
The computers tree has 5 cherries on it.
The computers basket has 5 cherries in it.
The computer spun onto the take 4 cherry spot! The computer takes four Cherries!

It is your turn!
Your tree has 10 cherries on it.
Your basket has 0 cherries in it.

Enter S to spin the spinner
s

You spun onto the bird spot but you have no cherries!

It is the computers turn!
The computers tree has 4 cherries on it.
The computers basket has 6 cherries in it.
The computer spun onto the take two cherry spot! The computer takes two Cherries!

It is your turn!
Your tree has 10 cherries on it.
Your basket has 0 cherries in it.

Enter S to spin the spinner
s

You spun onto the take one cherry spot! You take one Cherry!

It is the computers turn!
The computers tree has 2 cherries on it.
The computers basket has 8 cherries in it.
The computer spun onto the take 4 cherry spot! The computer takes four Cherries!

It is your turn!
Your tree has 9 cherries on it.
Your basket has 1 cherries in it.

Enter S to spin the spinner
s

Oops! You spilt all of your cherries!

It is the computers turn!
The computers tree has 1 cherries on it.
The computers basket has 9 cherries in it.
Oops! The computer spilt all of its cherries!

It is your turn!
Your tree has 10 cherries on it.
Your basket has 0 cherries in it.

Enter S to spin the spinner
s

You spun onto the bird spot but you have no cherries!

It is the computers turn!
The computers tree has 10 cherries on it.
The computers basket has 0 cherries in it.
The computer spun onto the take two cherry spot! The computer takes two Cherries!

It is your turn!
Your tree has 10 cherries on it.
Your basket has 0 cherries in it.

Enter S to spin the spinner
s

You spun onto the bird spot but you have no cherries!

It is the computers turn!
The computers tree has 8 cherries on it.
The computers basket has 2 cherries in it.
The computer spun onto the take 4 cherry spot! The computer takes four Cherries!

It is your turn!
Your tree has 10 cherries on it.
Your basket has 0 cherries in it.

Enter S to spin the spinner
s

Oops! You spilt all of your cherries!

It is the computers turn!
The computers tree has 7 cherries on it.
The computers basket has 3 cherries in it.
The computer spun onto to the bird spot! The computer loses two cherries!

It is your turn!
Your tree has 10 cherries on it.
Your basket has 0 cherries in it.

Enter S to spin the spinner
s

You spun onto the take three cherry spot! You take three Cherries!

It is the computers turn!
The computers tree has 9 cherries on it.
The computers basket has 1 cherries in it.
Oops! The computer spilt all of its cherries!

It is your turn!
Your tree has 7 cherries on it.
Your basket has 3 cherries in it.

Enter S to spin the spinner
s

You spun onto the take three cherry spot! You take three Cherries!

It is the computers turn!
The computers tree has 10 cherries on it.
The computers basket has 0 cherries in it.
The computer spun onto the take 4 cherry spot! The computer takes four Cherries!

It is your turn!
Your tree has 4 cherries on it.
Your basket has 6 cherries in it.

Enter S to spin the spinner
s

You spun onto the take 4 cherry spot! You take four Cherries!

It is the computers turn!
The computers tree has 9 cherries on it.
The computers basket has 1 cherries in it.
The computer spun onto the take 4 cherry spot! The computer takes four Cherries!

It is your turn!
Your tree has 3 cherries on it.
Your basket has 7 cherries in it.

Enter S to spin the spinner
s

Oops! You spilt all of your cherries!

It is the computers turn!
The computers tree has 8 cherries on it.
The computers basket has 2 cherries in it.
The computer spun onto the take one cherry spot! The computer takes one Cherry!

It is your turn!
Your tree has 10 cherries on it.
Your basket has 0 cherries in it.

Enter S to spin the spinner
s

You spun onto the take three cherry spot! You take three Cherries!

It is the computers turn!
The computers tree has 7 cherries on it.
The computers basket has 3 cherries in it.
The computer spun onto the take three cherry spot! The computer takes three Cherries!

It is your turn!
Your tree has 7 cherries on it.
Your basket has 3 cherries in it.

Enter S to spin the spinner
s

You spun onto to the dog spot! You lose two cherries!

It is the computers turn!
The computers tree has 4 cherries on it.
The computers basket has 6 cherries in it.
Oops! The computer spilt all of its cherries!

It is your turn!
Your tree has 9 cherries on it.
Your basket has 1 cherries in it.

Enter S to spin the spinner
s

You spun onto the take three cherry spot! You take three Cherries!

It is the computers turn!
The computers tree has 10 cherries on it.
The computers basket has 0 cherries in it.
Oops! The computer spilt all of its cherries!

It is your turn!
Your tree has 6 cherries on it.
Your basket has 4 cherries in it.

Enter S to spin the spinner
s

You spun onto the take three cherry spot! You take three Cherries!

It is the computers turn!
The computers tree has 10 cherries on it.
The computers basket has 0 cherries in it.
The computer spun onto the take three cherry spot! The computer takes three Cherries!

It is your turn!
Your tree has 3 cherries on it.
Your basket has 7 cherries in it.

Enter S to spin the spinner
s

You spun onto the take three cherry spot! You take three Cherries!

It is the computers turn!
The computers tree has 7 cherries on it.
The computers basket has 3 cherries in it.
The computer spun onto the take two cherry spot! The computer takes two Cherries!

Cogratulations you picked all your cherries and won the game!


Process exited with code: 0

OUTPUT TWO: THE LOSS

*/