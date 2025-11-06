#include <iostream>
#include<iomanip>
#include <ctime>  
#include <cstdlib>   
using namespace std;


// Fixed variables
const int ROCK = 1, PAPER = 2, SCISSORS = 3;


//Function Prototypes
int Dataverification(int);
int WongChoice(int);
int KelvinChoice(int); 
void ShowUnitedNumber(int);
void SelectedWinner(int, int, bool &);


//Main method
int main()
{
	//Variable declaration of main function
    int Wong_choice, Kelvin_choice;

    bool Replay;

    do
    {
        Wong_choice = WongChoice(Wong_choice);

        Kelvin_choice = KelvinChoice(Kelvin_choice);

        ShowUnitedNumber(Wong_choice);

        SelectedWinner(Wong_choice, Kelvin_choice,Replay);

    } while (Replay == 1);
    return 0;
    
} // End main function


int WongChoice(int Wong_choice)
{
    //  systematic time.
    unsigned seed = time(0);

    // Seed the united number generator.
    srand(seed);

    // United number
    return (rand() % (SCISSORS - ROCK + 1)) + ROCK;
}


int KelvinChoice(int Kelvin_choice)
{
 
cout << " Welcome to the game of Rock, Paper and Scissors." << endl;
cout << " This is a game for two players.(Wong and Kelvin) For each game," << endl;
cout << " each player selects one of the objects Rock, Paper, or Scissors." << endl;
cout << " The rules for winning the game are: " << endl;
cout << "1. If both players select the same object, it is a tie." << endl;
cout << "2. Rock breaks Scissors: So player who selects Rock wins." << endl;
cout << "3. Paper covers Rock: So player who selects Paper wins." << endl;
cout << "4. Scissors cuts Paper: So player who selects Scissors wins." << endl;
cout << "Enter R or r to select Rock, P or p to select Paper, and S or s to select Scissors." << endl;
    cout << "\nChoose(1-3) 'rock', 'paper', or 'scissors'.\n"
         << "(1) rock, (2) paper, or (3) scissors: ";
         
    Kelvin_choice = Dataverification(Kelvin_choice);
 return Kelvin_choice;
}


int Dataverification(int num1)
{

    while (!(cin >> num1) || (num1 < 1 || num1 > 3))
    {
        cout << "Error number. Please select(1-3)number : "<<endl;
             
        
    }

    return num1;
}

void ShowUnitedNumber(int Wong_choice)
{
    cout << "\nWong Choice = ";

    if (Wong_choice == 1)
        cout << "Rock";
    else if (Wong_choice == 2)
        cout << "Paper";
    else if (Wong_choice == 3)
     cout << "Scissors";
      cout << endl;
}


void SelectedWinner(int Wong_choice,int Kelvin_choice, bool & Replay)
{
    cout << endl;

    if (Wong_choice == ROCK)
    {
       if (Kelvin_choice == PAPER)
       {
            cout << "Kelvin win: (Paper covers rock).\n";
            Replay = 0;
        }
         else if (Kelvin_choice == SCISSORS)
        {
            cout << "Wong wins: (Rock breakes scissors).\n";
            Replay = 0;
        }
         else if (Kelvin_choice == ROCK)
        {
            cout << "Tie. Replay to select the winner." << endl;
            Replay = 1;
        }
    }
    else if (Wong_choice == PAPER)
    {
        if (Kelvin_choice == ROCK)
        {
            cout << "Wong wins: (Paper covers rock).\n";
            Replay = 0;
        }
        else if (Kelvin_choice == SCISSORS)
        {
            cout << "Kelvin win: (Scissors cut paper).\n";
           Replay = 0;
        }
        else if (Kelvin_choice == PAPER)
        {
            cout << "Tie. Replay to select the winner." << endl;
            Replay = 1;
        }
    }
    else if (Wong_choice == SCISSORS)
    {
        if (Kelvin_choice == ROCK)
        {
            cout << "Kelvin win: (Rock breakes scissors).\n";
            Replay = 0;
        }
        else if (Kelvin_choice == PAPER)
        {
            cout << "Wong wins: (Scissors cut paper).\n";
            Replay = 0;
        }
        else if (Kelvin_choice == SCISSORS)
        {
            cout << "Tie. Replay to select the winner." << endl;
            Replay = 1;

        }
    }
cout<<endl;
    }

