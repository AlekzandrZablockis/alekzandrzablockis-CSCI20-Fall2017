// ALekzandr Zablockis
// 12/8/17
// This program is a character sheet geenerator for the game dungeons and dragons. It will generate the 6 main stats with random generation simulating a 3D6 die for each stat. 
// The user will input which class and race they wouwd like and the program will configure the rest of the stats based off of these choics
// The program will end with writing to a .txt file the users character sheet.

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>    // Enables use of time() function
using namespace std;

/*
This class will hold functions neccesary to move values around to create the variabeles for the character sheet
The variables are needed fro the function is this class to call upon
*/

class CharacterSheet
{
    public:
    CharacterSheet();
    void setRaceHuman();
    void setRaceDwarf();
    void setRaceElf();
    void setRaceHalfing();
    void setClassFighter();
    void setClassThief();
    void setClassWizard();
    void setAbilityMods();
    void setGeneralStats();
    void takeCharacterName();
    int print();
    int printToFile();
    
    private:
    string character_first_name;
    string character_last_name;
    int AbilityScore[6];          // Pararall array for core stats
    int AbilityScoreMod[6];
    int fortitude;
    int reflex;
    int will;
    int AC;
    int touch_AC;    
    int flat_footed_AC;
    int speed;
    int HP;
    string vision;
    string race;
    string classA;

};
/*
This constructor runs a loop that will create the six main stats with random generation that is 3-18 possible
*/
CharacterSheet::CharacterSheet()
{
    srand(time(0));  // Unique seed
     
    for (int i = 0; i < 6; i++)
    {
        AbilityScore[i] = ((rand() % 6 + 1) + (rand() % 6 + 1) + (rand() % 6 + 1));
    }
}
/*
This function has no input
The purpose of this function is to output the players intial main stats so he can make a decison on what class and race to choose from them
The output of this is the 6 main stats to the user
*/
int CharacterSheet::print()
{
    cout << "These are your initial ability scores" << endl;
    cout << "Strength: " << AbilityScore[0] << " Mod: " << AbilityScoreMod[0] << endl;
    cout << "Dexterity: " << AbilityScore[1] << " Mod: " << AbilityScoreMod[1] << endl;
    cout << "Constitution: " << AbilityScore[2] << " Mod: " << AbilityScoreMod[2] << endl;
    cout << "Intelligence: " << AbilityScore[3] << " Mod: " << AbilityScoreMod[3] << endl;
    cout << "Wisdom: " << AbilityScore[4] << " Mod: " << AbilityScoreMod[4] << endl;
    cout << "Charisma: " << AbilityScore[5] << " Mod: " << AbilityScoreMod[5] << endl << endl;
}
/*
This function has no input
The purpose of this function is to write all of the data we have collected/calculated to a text file to act as the charactesheet
This functions output is all the data written to a text file
*/
int CharacterSheet::printToFile()
{
    ifstream fin; // Input file stream
    ofstream fout; // Output file stream
    
    fout.open("charactersheet.txt");
    
    fout << "Character Name: " << character_first_name << " " << character_last_name << endl;
    fout << "Race: " << race << endl;
    fout << "Vision: " << vision << endl;
    fout << "Class: " << classA << endl;
    fout << "Speed: " << speed << "ft" << endl;
    fout << endl << endl;
    fout << "Strength: " << AbilityScore[0] << " Mod: " << AbilityScoreMod[0] << endl;
    fout << "Dexterity: " << AbilityScore[1] << " Mod: " << AbilityScoreMod[1] << endl;
    fout << "Constitution: " << AbilityScore[2] << " Mod: " << AbilityScoreMod[2] << endl;
    fout << "Intelligence: " << AbilityScore[3] << " Mod: " << AbilityScoreMod[3] << endl;
    fout << "Wisdom: " << AbilityScore[4] << " Mod: " << AbilityScoreMod[4] << endl;
    fout << "Charisma: " << AbilityScore[5] << " Mod: " << AbilityScoreMod[5] << endl << endl;
    fout << endl;
    fout << "HP: " << HP << endl;
    fout << "Fortitude: " << fortitude << endl;
    fout << "Reflexes: " << reflex << endl;
    fout << "Will: " << will << endl;
    fout << "AC: " << AC << endl;
    fout << "Touch AC: " << touch_AC << endl;
    fout << "Flat_Footed_AC: " << flat_footed_AC << endl;
    
    fout.close();
}
/*
This functions input is the user charactes name
This funcitons purpose is to take the strings for the characters name
The output has new values
*/
void CharacterSheet::takeCharacterName()
{
    cout << "Now enter your characters first name" << endl;
    cin >> character_first_name;
    cout << "Now enter your characters last name" << endl;
    cin >> character_last_name;  
}

/*
The function has no input
The purpose of this funciton is calculate some general stats
The output has new values
*/
void CharacterSheet::setGeneralStats()
{
    AC = 10 + AbilityScoreMod[1];
    touch_AC = 10 + AbilityScoreMod[1];
    flat_footed_AC = 10;
}
/*
The input for this function is nothing
The purpose of this function is to set the modifies to the accoriding ability scores. It uses a calculation.
The output is that some variables have new values
*/
void CharacterSheet::setAbilityMods()
{
    for (int i = 0; i < 6; i++)
    {
        if ((AbilityScore[i] == 2) || (AbilityScore[i] == 3))
        {
            AbilityScoreMod[i] = -5;
        }
        
        if ((AbilityScore[i] == 4) || (AbilityScore[i] == 5))
        {
            AbilityScoreMod[i] = -3;
        }
        
        if ((AbilityScore[i] == 6) || (AbilityScore[i] == 7))
        {
            AbilityScoreMod[i] = -2;
        }
        
        if ((AbilityScore[i] == 8) || (AbilityScore[i] == 9))
        {
            AbilityScoreMod[i] = -1;
        }
        
        {
        if ((AbilityScore[i] == 10) || (AbilityScore[i] == 11))
            AbilityScoreMod[i] = 0;
        }
        
        if ((AbilityScore[i] == 12) || (AbilityScore[i] == 13))
        {
            AbilityScoreMod[i] = 1;
        }
        
        if ((AbilityScore[i] == 14) || (AbilityScore[i] == 15))
        {
            AbilityScoreMod[i] = 2;
        }
        
        if ((AbilityScore[i] == 16) || (AbilityScore[i] == 17))
        {
            AbilityScoreMod[i] = 3;
        }
        
        if ((AbilityScore[i] == 18) || (AbilityScore[i] == 19))
        {
            AbilityScoreMod[i] = 4;
        }
        
        if ((AbilityScore[i] == 20) || (AbilityScore[i] == 21))
        {
            AbilityScoreMod[i] = 5;
        }
        
    }
}
/*
The input for this function is nothing
The purpose of this function is to set some stats if the character is human
The output is that some variables have new values
*/
void CharacterSheet::setRaceHuman()
{
    speed = 30;
    vision = "Normal";
    race = "Human";
    
}
/*
The input for this function is nothing
The purpose of this function is to set some stats if the character is dwarf
The output is that some variables have new values
*/

void CharacterSheet::setRaceDwarf()
{
    AbilityScore[2] = AbilityScore[2] + 2;
    AbilityScore[5] = AbilityScore[5] - 2;
    speed = 20;
    vision = "Dark Vision";
    race = "Dwarf";
    
}
/*
The input for this function is nothing
The purpose of this function is to set some stats if the character is elf
The output is that some variables have new values
*/
void CharacterSheet::setRaceElf()
{
    AbilityScore[1] = AbilityScore[1] + 2;
    AbilityScore[2] = AbilityScore[2] - 2;
    vision = "Low Light";
    speed = 30;
    race = "Elf";
    
}
/*
The input for this function is nothing
The purpose of this function is to set some stats if the character is a fighter
The output is that some variables have new values
*/
void CharacterSheet::setClassFighter()
{
    HP = (10 + AbilityScoreMod[2]);
    fortitude = 2 + AbilityScore[2];
    reflex = 0 + AbilityScore[1];
    will = 0 + AbilityScore[4];
    classA = "Fighter";
}
/*
The input for this function is nothing
The purpose of this function is to set some stats if the character is a thief
The output is that some variables have new values
*/
void CharacterSheet::setClassThief()
{
    HP = (6 + AbilityScoreMod[2]);
    fortitude = 0 + AbilityScore[2];
    reflex = 2 + AbilityScore[1];
    will = 0 + AbilityScore[4];
    classA = "Thief";
}
/*
The input for this function is nothing
The purpose of this function is to set some stats if the character is a wizard
The output is that some variables have new values
*/
void CharacterSheet::setClassWizard()
{
    HP = (4 + AbilityScoreMod[2]);
    fortitude = 0 + AbilityScore[2];
    reflex = 0 + AbilityScore[1];
    will = 2 + AbilityScore[4];
    classA = "Wizard";
}

/*
The input for this function is nothing
The purpose of this function is to set some stats if the character is halfling
The output is that some variables have new values
*/
void CharacterSheet::setRaceHalfing()
{
    AbilityScore[1] = AbilityScore[1] + 2;
    AbilityScore[0] = AbilityScore[1] - 2;
    vision = "Normal";
    speed = 20;
    
}

int main ()
{
    CharacterSheet character; // Our object of the character sheet

    
    int choice = 0; // Place holder for switch case 
    int i = 0;      // Placer holder for loop
    
    
    character.print(); // Prints the inital ability scores
    
    
    cout << "Pick your race" << endl;
    cout << "1. Human" << endl << "2. Dwarf" << endl <<  "3. Elf" << endl << "4. Halfling" << endl; // Instructs user to input race
    cin >> choice;
    
    switch (choice) // Switch case will call functin pararall to the choice to preset the stats
    {
        case 1:
            character.setRaceHuman();
            break;
        case 2:
            character.setRaceDwarf();
            break;                       // These functoins set appropiate values based on input
        case 3:
            character.setRaceElf();
            break;
        case 4:
            character.setRaceHalfing();
            break;
        default:
            cout << "Invalid Input" << endl << endl;
    }
    
    character.setAbilityMods(); // Sets the ability mods for the ability scores since all possible modifcations to the orginal value have been made
    
    cout << endl << "Pick your class" << endl;
    cout << "1. Fighter" << endl << "2. Thief" << endl << "3. Wizard" << endl; // Instructs user input to class
    cin >> choice;
    
        switch (choice) // Switch case will call functin pararall to the choice to preset the stats
    {
        case 1:
            character.setClassFighter();
            break;
        case 2:
            character.setClassThief(); // These functoins set appropiate values based on input
            break;
        case 3:
            character.setClassWizard();
            break;
        default:
            cout << "Invalid Input" << endl << endl;
    }
    
    character.setGeneralStats(); // Sets some general stats
    
    character.takeCharacterName(); // Takes in the character name
    
    
    

    character.printToFile(); // Writes to a text file and is the end of the program
    
}
