#include<iostream>
#include<cmath>

using namespace std; // Bad practice, by the way

int main()

{
// Declare variables
    int cookies, extraCookies; // cookies = 0, extraCookies = 0
    int boxes,totalBoxes; // boxes = 0, totalBoxes = 0
    int leftOverBoxes; // leftOverBoxes = 0
    int containers; // containers = 0
    boxes = (cookies/24); // boxes = 0/24 = 0, this line does nothing

    extraCookies = cookies%24; // extraCookies = 0%24 = 0, this line does nothing
    containers = boxes/75; // containers = 0/75 = 0, this line does nothing
    leftOverBoxes = boxes%75; // leftOverBoxes = 0%75 = 0, this line does nothing


//  Ask for the user input ( doesnt make sense because we are given the capacities)
    cout << " How many cookies do you have ?"<< endl;
    cin >> cookies;
    cout << " You have this many cookies: " << cookies << endl;

    cout << " How many cookies can you fit in one box ?" << endl;
    cin >> cookies; // You throw away how many cookies the user has, and rewrite it with how many cookies fit in one box

    cout << " How many cookie boxes can you fit into a container ?" << endl;
    cin >> boxes;

    // Computer number of boxes needed
    if(extraCookies > 0) // 0 > 0 == false
    
  totalBoxes = (boxes + 1);
    cout <<" We need this many boxes:" << totalBoxes << endl;

    if(leftOverBoxes > 0) // 0 > 0 == false
      containers = ( containers + 1);
    cout << "We need this many containers: " << containers << endl;


    return 0;



    }
