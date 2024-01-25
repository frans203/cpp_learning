#include <iostream>

using namespace std;

int execute(int *variable) {
    *variable = 1 + 32;
    return 0;
}

double fahToCelsius(double fah){
    return (((fah - 32) * 5 )/ 9);
}


int main () {
    double fah = 0;
    double celsius = 0;

    cout << "Enter a fahrenheit temperature: ";
    cin >> fah;
    celsius = fahToCelsius(fah);
    cout<<celsius;
    
    cout << "You entendered in fahrenheit: " << fah << ". This is celsius is:" << celsius << endl;
    return 0;
}