#include <iostream>
#include <cmath>
using namespace std;
int main () {
   const double pi = atan(1) * 4 ;
   double radius;
   cout << "Enter the radius of a circle: ";
   cin >> radius;

   cout << "The area of the circle is: " << pi * pow(radius, 2) << endl;

   return 0;
}