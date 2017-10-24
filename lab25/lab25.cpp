// Alekzandr Zablockis
// 10/15/2017
// Create a book class that holds all meta data of a book. Implement set functions, get functions and print functions in your class.
// Write a program that uses book classes to store data for 5 book objects and ask the user for input for each. After all the data is entered print the result to the user.

         #include <iostream>
         #include <string>
         #include <cstdio>
         using namespace std;
 
 /*
 This class is the class of a book. It includes all information of a book that would be used for sourcing. This class includes functions for user to input data of the book, output data of those parts and output all of the data about the book
 You use this class when you want to have the user input data about the title, author, or copyright year of a book
 You use this function by having variables that will be called into the function parameters or by running the functions of the class with the object
 */
           class Book {
           public:
           void SetTitle(string title_input);
           string GetTitle();
           void SetAuthor(string author_input);              // Class Functions
           string GetAuthor();
           void SetCopyRightYear(int copyright_year_input);
           int GetCopyRightYear();
           void PrintBook();
           
           private:
           string title;                         // Class Variables
           string author;
           int copyright_year;
        };
 
 /*
 This function sets the title of the book the user inputs
 The inputs is a string which is the title of a book
 The outputs is that the variable title is set to the users input
 */
         void Book::SetTitle(string title_input) {
               title = title_input;
           }
/*
This function returns the input of the SetTitle Function
This function has no input.
This function outputs the variable title which holds the value that was set from the SetTitle function
*/
             string Book::GetTitle() {
                 return title;
             }
/*
This function sets the author of the book to the users inputs
This functions input is a string of the author of the book
This functions output is that the variable author is set to the users input
*/
             void Book::SetAuthor(string author_input) {
                 author = author_input;
             }
/*
This function returns the input of the SetTitle Function
This function has no input
This function outputs the variable author which holds the value that was set from the SetAuthor function
*/
             string Book::GetAuthor() {
                 return author;
             }
/*
This function sets the copyright year of the book to the users inputs
This functions input is the integer that is the copyright of the book
This functions output is that the variable copyright_year is set to the users inputs
*/
             void Book::SetCopyRightYear(int copyright_year_input) {
                 copyright_year = copyright_year_input;
             }
/*
This function returns the input of the SetCopyRightYear Function
This function has no input
This function outputs the variable copyright_year which holds the value that was set from the SetCopyRightYear Functoin
*/
             int Book::GetCopyRightYear() {
                 return copyright_year;
             }
/* 
This function prints all of the objects parts using the Get() functions
This function has no input
This functions outputs are the user inputs for each part of the object I.e title, author, copyright yea
*/
             void Book::PrintBook() {
                 cout << "Title of Book: " << GetTitle() << endl;
                 cout << "Author of Book: " << GetAuthor() << endl;          
                 cout << "Copyright Year: " << GetCopyRightYear() << endl;
             }
 
 
        int main ()
        {
            string title_input = "";
            string author_input = "";        // Place holder values
            int copyright_year_input = 0;
    
    
            Book book1;
            Book book2;
            Book book3;               // The objects
            Book book4;
            Book book5;
    
            cout << "Enter the book title: ";
            cin >> title_input;
            book1.SetTitle(title_input);
            cout << "Enter the author name: ";
            cin >> author_input;                      // Instruts the user and takes there input for each part of the object. It then sets that input using the Set() functions.
            book1.SetAuthor(author_input);
            cout << "Enter the copyright year: ";
            cin >> copyright_year_input;
            book1.SetCopyRightYear(copyright_year_input);
            
            cout << "Enter the book title: ";
            cin >> title_input;
            book2.SetTitle(title_input);
            cout << "Enter the author name: ";
            cin >> author_input;                      // Instruts the user and takes there input for each part of the object. It then sets that input using the Set() functions.
            book2.SetAuthor(author_input);
            cout << "Enter the copyright year: ";
            cin >> copyright_year_input;
            book2.SetCopyRightYear(copyright_year_input);
            
            cout << "Enter the book title: ";
            cin >> title_input;
            book3.SetTitle(title_input);
            cout << "Enter the author name: ";
            cin >> author_input;                        // Instruts the user and takes there input for each part of the object. It then sets that input using the Set() functions.
            book3.SetAuthor(author_input);
            cout << "Enter the copyright year: ";
            cin >> copyright_year_input;
            book3.SetCopyRightYear(copyright_year_input);
            
            cout << "Enter the book title: ";
            cin >> title_input;
            book4.SetTitle(title_input);
            cout << "Enter the author name: ";
            cin >> author_input;                              // Instruts the user and takes there input for each part of the object. It then sets that input using the Set() functions.
            book4.SetAuthor(author_input);
            cout << "Enter the copyright year: ";
            cin >> copyright_year_input;
            book4.SetCopyRightYear(copyright_year_input);
            
            cout << "Enter the book title: ";
            cin >> title_input;
            book5.SetTitle(title_input);
            cout << "Enter the author name: ";
            cin >> author_input;                                // Instruts the user and takes there input for each part of the object. It then sets that input using the Set() functions.
            book5.SetAuthor(author_input);
            cout << "Enter the copyright year: ";
            cin >> copyright_year_input;
            book5.SetCopyRightYear(copyright_year_input);
            
            book1.PrintBook();
            cout << endl;
            book2.PrintBook();
            cout << endl;
            book3.PrintBook();                                    // Prints all of the inputs to the objects to the user in a organized fashion
            cout << endl;
            book4.PrintBook();
            cout << endl;
            book5.PrintBook();
            cout << endl;

}

/*
Test

Enter the book title: Book1
Enter the author name: Author1
Enter the copyright year: 1
Enter the book title: Book2
Enter the author name: Author2
Enter the copyright year: 2
Enter the book title: Book3
Enter the author name: Autor3
Enter the copyright year: 3
Enter the book title: Book4
Enter the author name: Author4
Enter the copyright year: 4
Enter the book title: Book5
Enter the author name: Author5
Enter the copyright year: 5
Title of Book: Book1
Author of Book: Author1
Copyright Year: 1

Title of Book: Book2
Author of Book: Author2
Copyright Year: 2

Title of Book: Book3
Author of Book: Autor3
Copyright Year: 3

Title of Book: Book4
Author of Book: Author4
Copyright Year: 4

Title of Book: Book5
Author of Book: Author5
Copyright Year: 5
*/
