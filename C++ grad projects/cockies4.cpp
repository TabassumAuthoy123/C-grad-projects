#include <iostream>

using namespace std;

int main()
{
int cookies, boxes,extraCookies, containers, extraBoxes;

cout<< "Please enter the total number of cookies:";
cin >> cookies;
cout<< "\nThe total number of cookies is:"<< cookies<< endl;

boxes = cookies / 24;
extraCookies = cookies % 24;
containers = boxes / 75;
extraBoxes = boxes % 75;


{
if (boxes > 0)
cout << "boxes needed = " << boxes << endl;
if (containers > 0)
cout << "containers needed = " << containers << endl;
if (extraBoxes > 0)
cout << "leftover boxes = " << extraBoxes << endl;
if (extraCookies > 0)
cout << "leftover cookies = " << extraCookies << endl;

}
return 0;
}
