#include <iostream>

using namespace std;

int execute(int *variable) {
    *variable = 1 + 32;
    return 0;
}

int main () {
    int variable = 90;
    execute(&variable);
    cout << variable << endl;
    return 0;

}