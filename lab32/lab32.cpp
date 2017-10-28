// Alekzandr Zablockis
// 10/26/2017
// Create a program that will calculate income tax and an amount owed or refunded to the user. The program was use the following information:
// name, filing status, gross wages and the amount of tax withheld take the users inputs then remoxe 4,050 from the gross wages and 6,350 if they are single or 12,700 if they are married.
// If the number after is zero then there tax owed is zero if not then use the tax calculator to determine what they owe.

#include <iostream>
#include <string>
using namespace std;



/*
This function calculates the tax owed and outputs the name of the user, their gross wages, their taxes owed and any refund if any for a non married person.
The inputs are string name, double gross_wages, double tax_withheld.
The outputs are name, total gross wages, taxes owed, and refund if any.
*/

double NotMarriedTaxCalculator(string name, double gross_wages, double tax_withheld) //Function for those who are not married
{
    string real_name = name;
    double total_gross_wages = gross_wages;
    double real_tax_withheld = tax_withheld;
    double tax = (total_gross_wages - 10400);           // Place holder values, variables or equations that will be used throughout the funciton
    double new_tax;
    double final_tax = 0;
    double refund = 0.0;
    
    if (tax > 0)                                    // When the tax owed isn't 0 this will calculate the tax owed 
    {
        if (total_gross_wages >= 0 && total_gross_wages <= 9325) {
        new_tax = (total_gross_wages * 0.10);
        }
        else if (total_gross_wages >= 9326 && total_gross_wages <= 37950) {
        new_tax = (932.50 + ((total_gross_wages - 9325) * 0.15));
        }
        else if (total_gross_wages >= 37951 && total_gross_wages <= 91900) {
        new_tax = (5226.25 + ((total_gross_wages - 37950) * 0.25));
        }
        else if (total_gross_wages >= 91901 && total_gross_wages <= 191650) {
        new_tax = (18713.75 + ((total_gross_wages - 91900) * 0.28));
        }
        else if (total_gross_wages >= 191651 && total_gross_wages <= 416700) {
        new_tax = (46643.75 + ((total_gross_wages - 191650) * 0.33));
        }
        else if (total_gross_wages > 416700) {
        new_tax = (120910.25 + ((total_gross_wages - 416700) * 0.396));
        }
        
        final_tax = (new_tax - real_tax_withheld);
        if (final_tax < 0 ){
            final_tax = 0;
            refund = (real_tax_withheld - new_tax);
        }
    
    }
    
    if (tax < 0)                                                      // When the taxed owed is 0 this creates the value for the refund
    {
        final_tax = 0;
        refund = real_tax_withheld;
    }
    
    cout << "Name: " << real_name << endl;
    cout << "Total Gross Adjusted Income: " << total_gross_wages << endl;
    cout << "Total Tax Owed: " << final_tax << endl;                             // Outputs the programs results to the user
    cout << real_name << " is entitled to a REFUND of " << refund << "$" << endl;
    
}

/*
This function calculates the tax owed and outputs the name of the user, their gross wages, their taxes owed and any refund if any for a married couple.
The inputs are string name, double gross_wages, double tax_withheld.
The outputs are name, total gross wages, taxes owed, and refund if any.
*/

double MarriedTaxCalculator(string name, double gross_wages, double tax_withheld) // Function for those who are married 
{
    string real_name = name;
    double total_gross_wages = gross_wages;
    double real_tax_withheld = tax_withheld;
    double tax = (total_gross_wages - 16750);                                    // Placeholders, variables and equations for the function
    double new_tax;
    double final_tax = 0;
    double refund = 0.0;
    
    if (tax > 0)                                                               // When the tax owed is not 0 this will calculate the tax owed
    {
        if (total_gross_wages >= 0 && total_gross_wages <= 18650) {
        new_tax = (total_gross_wages * 0.10);
        }
        else if (total_gross_wages >= 18651 && total_gross_wages <= 75900) {
        new_tax = (1865 + ((total_gross_wages - 18650) * 0.15));
        }
        else if (total_gross_wages >= 75901 && total_gross_wages <= 153100) {
        new_tax = (10452.5 + ((total_gross_wages - 75900) * 0.25));
        }
        else if (total_gross_wages >= 153101 && total_gross_wages <= 233350) {
        new_tax = (29752.50 + ((total_gross_wages - 153100) * 0.28));
        }
        else if (total_gross_wages >= 233351 && total_gross_wages <= 416700) {
        new_tax = (52222.50 + ((total_gross_wages - 233350) * 0.33));
        }
        else if (total_gross_wages > 416700) {
        new_tax = (112728 + ((total_gross_wages - 470700) * 0.396));
        }
        
        final_tax = (new_tax - real_tax_withheld);
    
    }
    
    if (tax < 0)                                                          // When the tax owed is 0 this will create the value for the refund
    {
        final_tax = 0;
        refund = real_tax_withheld;
    }
    
    cout << "Name: " << real_name << endl;
    cout << "Total Gross Adjusted Income: " << total_gross_wages << endl;
    cout << "Total Tax Owed: " << final_tax << endl;                             // Outputs programs results to the user
    cout << real_name << " is entitled to a REFUND of " << refund << "$" << endl;
    
}

int main() 
{
    string name = "";
    char filing_status = 'z';
    double gross_wages = 0.0;                           // Place holder values
    double tax_withheld = 0.0;
    
    cout << "Please enter your name" << endl;
    cin >> name;
    cout << "Please enter your gross wages" << endl;
    cin >> gross_wages;                                                         // Instructts the user to input values
    cout << "Please enter your amount of taxes withheld" << endl;
    cin >> tax_withheld; 
    cout << "Please pick one of the following options" << endl << "A. I am not married" << endl << "B. I am married" << endl;
    cin >> filing_status;
    
    switch (filing_status) { // Switch case lets us call the approptiate function for whether they are married or not
        case 'a':
        case 'A':
            NotMarriedTaxCalculator(name, gross_wages, tax_withheld);
            break;
        case 'b':
        case 'B':
            MarriedTaxCalculator(name, gross_wages, tax_withheld);
            break;
        default:
            cout << "Not Valid Input" << endl;
            break;
        }
}

/*
Name: Joe_Vandal
Total Gross Adjusted Income: 12100
Total Tax Owed: 1098.75
Joe_Vandal is entitled to a REFUND of 0$

Name: Alfonso_Haynes
Total Gross Adjusted Income: 32351
Total Tax Owed: 728.15
Alfonso_Haynes is entitled to a REFUND of 0$

Name: Bridget_Rowe
Total Gross Adjusted Income: 88229
Total Tax Owed: 5739
Bridget_Rowe is entitled to a REFUND of 0$

Name: Wendy_Joseph
Total Gross Adjusted Income: 73291
Total Tax Owed: 3089.15
Wendy_Joseph is entitled to a REFUND of 0$
*/