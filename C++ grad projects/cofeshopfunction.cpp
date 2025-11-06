#include <iostream>
using namespace std;

void showChoices()
{
    cout << "Welcome to Jason's Coffee Shop\n\n";
    cout << "1. Buy Coffee" << endl;
    cout << "2. Show total cups sold by size"<< endl;
    cout << "3. Show total amount of coffee sold"<<endl;
    cout << "4. Show total amount of money made"<< endl;
    cout << "0. Exit" << endl;
    cout << "\nYour choice: ";
}

void buyCoffee(int numberSmCups,float totalSmCups,int numberMedCups,float totalMedCups, int numberLgCups,float totalLgCups)
{

    char coffeeSize, order = 'y';
    bool coffeeSelect = true;
    float smCoffee = 1.75, mdCoffee = 1.90, lgCoffee = 2.00, totalCoffee = 0;

    while(coffeeSelect)
    {        
        if (order == 'y' ||order =='Y'){

        cout << "Size of Coffee [S, M, L]: ";
        cin >>  coffeeSize;

        if (coffeeSize == 's' || coffeeSize == 'S')
        {
            cout << "Quantity of Small Coffee: ";
            cin >> numberSmCups;
            totalSmCups = numberSmCups * smCoffee;
            cout << "Small Coffee: "<<numberSmCups<<", Bill: "<<totalSmCups<<endl;
            totalCoffee += totalSmCups;
            cout << "Add another coffee [Y or N]: "<<endl;
            cin >>  order;
        }
        else if (coffeeSize == 'm' || coffeeSize == 'M')
        {
            cout << "Quantity of Medium Coffee: ";
            cin >> numberMedCups;
            totalMedCups = numberMedCups * mdCoffee;
            cout << "Medium Coffee: "<<numberMedCups<<", Bill: "<<totalMedCups<<endl;
            totalCoffee += totalMedCups;
            cout << "Add another coffee [Y or N]: "<<endl;
            cin >>  order;
        }
        else if (coffeeSize == 'l' || coffeeSize == 'L')
        {
            cout << "Quantity of Large Coffee: ";
            cin >> numberLgCups;
            totalLgCups = numberLgCups * lgCoffee;
            cout << "Large Coffee: "<<numberLgCups<<", Bill: "<<totalLgCups<<endl;
            totalCoffee += totalLgCups;
            cout << "Add another coffee [Y or N]: ";
            cin >>  order;
        }
        }
        else
            break;
    }

    cout << "--------------\n";
    cout << "Your invoice: "<<endl;
    cout<< endl;
    if (numberSmCups>= 1) 
        cout << "Small Coffee: "<< numberSmCups <<" cups ($ "<< smCoffee <<"/cup) Amount: $ "<< totalSmCups << endl;
    if (numberMedCups>=1)
        cout << "Medium Coffee: "<< numberMedCups <<" cups ($ "<< mdCoffee << "/cup) Amount: $ "<< totalMedCups << endl;
    if (numberLgCups>=1) 
        cout << "Large Coffee: " << numberLgCups <<" cups ($ " << lgCoffee << "/cup) Amount: $ " << totalLgCups << endl;
    cout<< endl;
    cout << "Total Amount: "<<"$ "<< (totalSmCups+ totalMedCups+ totalLgCups) << endl;
    cout << "--------------" << endl;

 }

void cupsSold(int numberSmCups,int numberMedCups,int numberLgCups){
     int lifeSmCups=0;
     int lifeMdCups=0;
     int lifeLgCups=0;

     lifeSmCups = lifeSmCups + numberSmCups;
     lifeMdCups = lifeMdCups + numberMedCups;
     lifeLgCups = lifeLgCups + numberLgCups;

     cout << "Total Small cups: "<<lifeSmCups<<endl;
     cout << "Total Medium Cups:"<<lifeMdCups<<endl;
     cout << "Total Large Cups:"<<lifeLgCups<<endl;
}

void totalAmount(float totalCoffee)
{
    cout << "Total: "<<"$"<<totalCoffee<<endl;
}

int main()
{
    int numberSmCups = 0, numberMedCups = 0, numberLgCups = 0, choice;
    float totalSmCups = 0, totalMedCups = 0, totalLgCups = 0, totalCoffee;

    while (choice != 0)
    {
        showChoices();
        cin >> choice;
        cout << endl;

        if (choice == 1)
        {
            cout <<"You selected to buy coffee."<< endl;
            buyCoffee(numberSmCups,totalSmCups,numberMedCups,totalMedCups,numberLgCups,totalLgCups);
        }
        else if (choice == 2)
        {
            cout << "The total amount of cups sold by size is:  "<<endl;
            cupsSold(numberSmCups,numberMedCups,numberLgCups);
        }
        else if (choice == 3)
        {
            cout << "Total Coffee Sold:  "<<endl;
           // cupsSold(numberSmCups,numberMedCups,numberLgCups);
        }
        else if (choice == 4)
        {
            cout << "Money made from coffee sales:  "<<endl;
            totalAmount(totalCoffee);
        }
        else if (choice == 0)
        {
            cout << "EXIT"<<endl;
            break;
        }
        else
            cout << "Invalid Input" << endl;
    }

    return 0;
}
