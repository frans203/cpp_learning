#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    srand(time(nullptr)); //using time from 1970 as seed for random number
    int minValue = 1;
    int maxvalue = 6;
    int diceNumber = (rand() % (maxvalue - minValue + minValue)) + minValue; 
    int dice2Number = (rand() % (maxvalue - minValue + minValue)) + minValue; 

    cout << "Dice one: " << diceNumber <<endl;
    cout << "Dice two: " << dice2Number << endl;

    return 0;

}