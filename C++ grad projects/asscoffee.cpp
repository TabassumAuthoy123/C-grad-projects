#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;

//declare global variable 
const double SMALL_CUP_COST = 1.75;   //for the price of small size of cup
const double MEDIUM_CUP_COST = 1.90;  //for the price of medium size of cup
const double LARGE_CUP_COST = 2.00;   //for the price of large size of cup
const int SMALL_CUP_SIZE = 9;   //small size of cup in Oz
const int MEDIUM_CUP_SIZE = 12; //medium size of cup in Oz
const int LARGE_CUP_SIZE = 15; //large size of cup in Oz


void menu();   //userdefined function for menu driven (this is prototype function)
void showCupCount(int s, int m, int l);  //Function declaration for calculating total cups sold 
void showMoneyMade(double m);           //Function declaration for calculating profit of sales
void showCoffeeSold(int c);   //Function declaration for calculating total amount each cup sold 

void sellCoffee(int& sCupCount, int &mCupCount, int& lCupCount, int&  totalCoffeeSold, double& tMoneyMade);  //this is passing by reference. Why? because do not have fixed value.

int main()
{
    int smallCupCount = 0;    //set variable for calculating total small's cups
	int mediumCupCount = 0;  //set variable for calculating total medium's cups
	int largeCupCount = 0;   //set variable for calculating total large's cups
	int totalAmountOfCoffeeSold = 0;   //set variable for calculating total amount each cup sold
	double totalMoneyMade = 0.0;   //set variable for calculating total profit sold coffee
	int choice;   //declaration of choosen

	cout << fixed << showpoint << setprecision(2);

    menu();  //set function definition to calling the menu driven.
	
	//input statement
	cin >> choice;
	cout << endl;
	
	//looping and selection process done after user entered the input
	
	while (choice != 9) //9 is only random number to stop the program.. You may use any input.
	{
		switch (choice)
		{
		case 1: 
			sellCoffee(smallCupCount, mediumCupCount, largeCupCount,totalAmountOfCoffeeSold, totalMoneyMade);  //first process in menu driven. follow the requirement of assignment's question
			break;
		case 2:
			showMoneyMade(totalMoneyMade);   //second process in menu driven. follow the requirement of assignment's question
			break;
		case 3:
			showCoffeeSold(totalAmountOfCoffeeSold);   //Thirs process in menu driven. follow the requirement of assignment's question
			break;
		case 4: 
			showCupCount(smallCupCount, mediumCupCount, largeCupCount);  //forth process in menu driven. follow the requirement of assignment's question
			break;
		case 5:   //fifth process in menu driven. follow the requirement of assignment's question
			showCupCount(smallCupCount, mediumCupCount, largeCupCount);
			showCoffeeSold(totalAmountOfCoffeeSold);
			showMoneyMade(totalMoneyMade);
			break;
		default: //error message
			cout << "Invalid choice." << endl;
		}
		
		//repeating process. this is mean by "at anytime" process.
		menu();
        cin >> choice;
        cout << endl;
	}
	
	return 0;
}

void menu()  //menu-driven function. follow the requirements' question
{
	cout <<"1: Enter 1 to order coffee." << endl;
	cout <<"2: Enter 2 to check the total money made up to this time." << endl;
	cout <<"3: Enter 3 to check the total amount of coffee sold up to this time." << endl;
	cout <<"4: Enter 4 to check the number of cups of coffee of each size sold." << endl;
	cout <<"5: Enter 5 to print the data." << endl;
	cout <<"9: Enter 9 to exit the program." << endl;
}

void showCupCount(int s, int m, int l)    //function definition 
{
	cout << "Small cup count: " << s << endl;
	cout << "Medium cup count: " << m << endl;
	cout << "Large cup count: " << l << endl;
}

void showMoneyMade(double m)   //function definition 
{ 
	cout << "Total money made: $" << m << endl;
}

void showCoffeeSold(int c)    //function definition 
{
	cout << "Total amount of coffee sold: " << c << "oz" << endl;
}

void coffeeMenu()    //function definition
{
	cout <<"1: Enter 1 to buy coffee in a small cup size (9 oz)" << endl;
	cout <<"2: Enter 2 to buy coffee in a medium cup size (12 oz)" << endl;
	cout <<"3: Enter 3 to buy coffee in a large cup size (15 oz)" << endl;
	cout <<"9: Enter 9 to exit." << endl;
}

void sellCoffee(int& sCupCount, int &mCupCount, int& lCupCount, int& tCoffeeSold, double& tMoneyMade)  //function definition
{
	int cupSize;
	int numOfCupsOrdered;

	double bill = 0;

	coffeeMenu();
	cin >> cupSize;
	cout << endl; 

	while (cupSize != 9)
	{
		switch (cupSize)
	    {
		case 1:
			cout << "Enter the number of cups: ";
			cin >> numOfCupsOrdered;
			cout << endl;

			sCupCount = sCupCount + numOfCupsOrdered;
			bill = bill + numOfCupsOrdered * SMALL_CUP_COST;
			tCoffeeSold = tCoffeeSold + numOfCupsOrdered * SMALL_CUP_SIZE;
			break;
		case 2:
			cout << "Enter the number of cups: ";
			cin >> numOfCupsOrdered;
			cout << endl;

			mCupCount = mCupCount + numOfCupsOrdered;
			bill = bill + numOfCupsOrdered * MEDIUM_CUP_COST;
			tCoffeeSold = tCoffeeSold + numOfCupsOrdered * MEDIUM_CUP_SIZE;
			break;
		case 3:
			cout << "Enter the number of cups: ";
			cin >> numOfCupsOrdered;
			cout << endl;

			lCupCount = lCupCount + numOfCupsOrdered;
			bill = bill + numOfCupsOrdered * LARGE_CUP_COST;
			tCoffeeSold = tCoffeeSold + numOfCupsOrdered * LARGE_CUP_SIZE;
			break;
		default:
			cout << "Invalid choice." << endl;
	    }

	    coffeeMenu();
	    cin >> cupSize;
	    cout << endl; 
    }

	cout << "Please pay $" << bill << endl;

	tMoneyMade = tMoneyMade + bill;
}
