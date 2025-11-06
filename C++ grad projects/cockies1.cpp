#include<iostream>
#include<math.h>
using namespace std;
int main()
{
// Declare variables
    int cookies, extraCookies;
    int boxes,totalBoxes;
    int leftOverBoxes;
    int containers;
    boxes = (cookies/24);
	extraCookies = cookies%24;
    containers = boxes/75;
    leftOverBoxes = boxes%75;
//  Ask for the user input ( doesnt make sense because we are given the capacities)
    cout << " How many cookies do you have ? :"<< endl;
    cin >> cookies;
    cout << " You have this many cookies: " << cookies << endl;
    cout << " How many cookies can you fit in one box ? :" << endl;
    cin >> cookies;
    cout << " How many cookie boxes can you fit into a container ? :" << endl;
    cin >> boxes;
  // Computer number of boxes needed
    if(extraCookies > 0)
      totalBoxes = (boxes + 1);
    cout <<" We need this many boxes:" << totalBoxes << endl;
    if(leftOverBoxes > 0)
      containers = ( containers + 1);
    cout << "We need this many containers: " << containers << endl;
    return 0;
}
