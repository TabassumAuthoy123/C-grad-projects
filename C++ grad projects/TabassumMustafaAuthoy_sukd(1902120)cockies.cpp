//   header file
#include<iostream>
//   lets user use cin, cout, and endl without std::
using namespace std;
//   begin main
int main()
{
   //   declares constants
   const int cookies = 24;
   const int container = 75;
   
   //   declares variables
   int totalCookies, boxCookies, containerBoxes, totalBoxes, totalContainers;
   double extraBoxes, extraCookies;
   cout << "Welcome to Maria Cafeteria which sells a variety of cookies\n\n";
   //   read number of cookies
   cout << "Enter the total number of cookies: ";
   cin >> totalCookies;
   //   read number of cookies in a box
   cout << "Enter the number of cookies in a box: ";
   cin >> boxCookies;
   //   read number of boxes in a container
   cout << "Enter the number of boxes in the container: ";
   cin >> containerBoxes;
   cout << endl;
   
   //   compute boxes needed
   totalBoxes = totalCookies / boxCookies;
   //   compute leftover cookies
   extraCookies = totalCookies % boxCookies;
   //   compute containers
   totalContainers = totalBoxes / containerBoxes;
   //   compute leftover boxes
   extraBoxes = totalBoxes % containerBoxes;
   
   //   display the output
   cout << "Number of boxes needed: "
       << totalBoxes << endl;
   cout << "Number of containers needed: "
       << totalContainers << endl;
   cout << "Number of leftover boxes needed: "
       << extraBoxes << endl;
   cout << "Number of leftover cookies needed: "
       << extraCookies << endl;

   system("pause");
   return 0;
   //   end main
}
