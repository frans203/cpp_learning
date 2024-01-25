#include <iostream>

using namespace std;

int main(){
    int number = 1'000'000;
    short another = number; //using definig by {} throws an error
    cout << another <<endl; //16960 will be the result since 'number' needed to be decreased

    short number2 = 100; //using 1'000'000 as a value thows an error
    int another2 = number2; //the opposite is okay because additional places in memory will be filled with zeros
    cout << another2;
    return 0;

}