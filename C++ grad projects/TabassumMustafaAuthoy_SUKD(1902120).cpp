#include <iostream>
using namespace std;
enum objectType { ROCK,PAPER,SCISSORS };
int gameCount; //variable to store the number of games played
int winCount1; //variable to store the number of games won by player 1
int winCount2; //variable to store the number of games won by player 2
int gamewinner;
char response; //variable to get the user's response to play the game
char selection1;
char selection2;
objectType play1; //player1's selection
objectType play2; //player2's selection
void convertEnum(objectType object);
objectType winningObject(objectType play1, objectType play2);
//Function displayRules
void displayRules()
{
cout << " Welcome to the game of Rock, Paper and Scissors." << endl;
cout << " This is a game for two players.(Player 1.Wong and Player 2.Kelvin )," << endl;
cout << " For each game,each player selects one of the objects Rock, Paper, or Scissors." << endl;
cout << " The rules for winning the game are: " << endl;
cout << "1. If both players select the same object, it is a tie." << endl;
cout << "2. Rock breaks Scissors: So player who selects Rock wins." << endl;
cout << "3. Paper covers Rock: So player who selects Paper wins." << endl;
cout << "4. Scissors cuts Paper: So player who selects Scissors wins." << endl;
cout << "Enter R or r to select Rock, P or p to select Paper, and S or s to select Scissors." << endl;
}
//Function validSelection
bool validSelection(char selection)
{
switch (selection) {
case 'R':
case 'r':
case 'P':
case 'p':
case 'S':
case 's':
return true;
default:
return false;
}
}
//Function retrievePlay
objectType retrievePlay(char selection)
{
objectType object;
switch (selection) {
case 'R':
case 'r':
object = ROCK;
break;
case 'P':
case 'p':
object = PAPER;
break;
case 'S':
case 's':
object = SCISSORS;
}
return object;
}
//Function gameResult
void gameResult(objectType play1, objectType play2,
int& winner)
{
objectType winnerObject;
if (play1 == play2) {
winner = 0;
cout << "Both players selected ";
convertEnum(play1);
cout << ". This game is a tie." << endl;
}
else {
winnerObject = winningObject(play1, play2);
//Output each player's choice
cout << "Player 1 selected ";
convertEnum(play1);
cout << " and player 2 selected ";
convertEnum(play2);
cout << ". ";
//Decide the winner
if (play1 == winnerObject)
winner = 1;
else if (play2 == winnerObject)
winner = 2;
//Output the winner
cout << "Player " << winner << " wins this game."
<< endl;
}
}
//Function convertEnum
void convertEnum(objectType object)
{
switch (object) {
case ROCK:
cout << "Rock";
break;
case PAPER:
cout << "Paper";
break;
case SCISSORS:
cout << "Scissors";
}
}
//Function winningObject
objectType winningObject(objectType play1, objectType play2)
{
if ((play1 == ROCK && play2 == SCISSORS)
|| (play2 == ROCK && play1 == SCISSORS))
return ROCK;
else if ((play1 == ROCK && play2 == PAPER)
|| (play2 == ROCK && play1 == PAPER))
return PAPER;
else
return SCISSORS;
}
//Function displayResults
void displayResults(int gCount, int wCount1, int wCount2)
{
cout << "\n\nThe total number of plays: " << gCount << endl;
cout << "The number of plays won by player 1 (wong): " << wCount1 << endl;
cout << "The number of plays won by player 2 (kelvin): " << wCount2 << endl;
}
int main()
{
int count1 = 0, count2 = 0, win, count = 0;
char choice,c1,c2;
displayRules();
do {
cout << "First Player (Wong)input: ";
// read user 1 input
scanf(" %c", &c1);
objectType obj1 = retrievePlay(c1);
cout << "Second Player (Kelvin) input: ";
// read user 2 input
scanf(" %c", &c2);
objectType obj2 = retrievePlay(c2);
// finding result
gameResult(obj1, obj2, win);
// win is 1 user 1 win else user2 wins
if (win == 1)
count1++;
else
count2++;
count++; 
// increment the game count
// display the result
displayResults(count, count1, count2);
cout << "press 'y' to continue or any other key to exit : ";
scanf(" %c", &choice);
} while (choice == 'Y' || choice == 'y');
return 0;
}
