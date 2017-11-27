// Alekzandr Zablockis
// 11/19/17
/*
Write a program that will read a student’s grades and output an HTML page to output a student’s transcript including semester GPA.  
The program should ask for an input file which includes the student’s name, number of classes, and list of grades (A, B, C, D, F) and class hours. 
It reads the data and calculates the semester GPA and overall GPA. 
*/

#include <iostream>
#include <string>
#include <fstream> 
#include <iomanip> 
#include <sstream> 
using namespace std;

int main ()
{
    ifstream fin; // Input file stream
    ofstream fout; // Output file stream
    const int SIZE = 5; // Const to allow up to max amount of classes 6. This is assuming this is a highschool transcript.
    string file_name = "";
    string first_name = ""; // Variables to hold general data needed
    string last_name = "";
    int total_classes = 0;
    char letter_grades[SIZE]; 
    int grade_gpa_points[SIZE];    // Paralll array to hold important data for GPA calculation
    int class_units[SIZE];
    double semester_gpa = 0.0; // Our end result variables
    double overall_gpa = 0.0;
    
    
    cout << "Please enter the file name to create student transcript..." << endl; // Instructs user to put in file name to read from
    cin >> file_name;
    
    fin.open(file_name); // Opens the file
    
    if (!fin.is_open())  // Determines if the file opened properally
    {
      cout << "Could not open the file you requested" << endl;      
      return 1;
    }
   
   fin >> first_name;
   fin >> last_name;      // Takes the beginning basic input
   fin >> total_classes;

   for (int i = 0; i < SIZE; i++) // Loops until all class_units and letter_grades are determined
   {
       fin >> class_units[i];
       fin >> letter_grades[i];
   }
   
   for (int i = 0; i < SIZE; i++) // Loop runs until all letter grades are now given a value
   {
       switch (letter_grades[i]) // Switch determinres what point gpa equivlent for each letter
       {
           case 'A':
           grade_gpa_points[i] = 4;
           break;
           case 'B':
           grade_gpa_points[i] = 3;
           break;
           case 'C':
           grade_gpa_points[i] = 2;
           break;
           case 'D':
           grade_gpa_points[i] = 1;
           break;
           case 'F':
           grade_gpa_points[i] = 0;
           break;
       }
   }
   
    semester_gpa = ((grade_gpa_points[0] + grade_gpa_points[1] + grade_gpa_points[2] + grade_gpa_points[3] + grade_gpa_points[4]) / total_classes); // Calculation to determine GPA
    
    fin.close();
    
    fout.open("transcript.html"); // Opens the transcript blank file we will write to
    
    // Outputs html code to output file
    
    fout << "!DOCTYPE  html>" << endl;
    fout << "<html>" << endl;
    fout << "<head>" << endl;
    fout << "<title>" << first_name << " " << last_name << "'s</title>" << endl;
    fout << "</head>" << endl;
    fout << "<body>" << endl;
    fout << endl;
    fout << "<h1>Transcript for " << first_name << " " << last_name << "</h1>" << endl;
    
    for (int i = 0; i < SIZE; i++)
    {
        fout << "<p>" << letter_grades[i] << " " << grade_gpa_points[i] << endl;
    }
    fout << "<p>" << "Semester GPA: " << semester_gpa << "</p>" << endl; 
    
    fout.close();
    
    cout << "Transcript has been written to transcript.html" << endl;
    
}