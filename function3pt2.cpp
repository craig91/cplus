#include <iostream>
using namespace std;

int getValueFromUser() {
    cout << "Enter an integer: ";
    int input{};
    cin >> input;
    return input;
}

void printDouble(int value) {
    cout << value << " doubled is: " << value * 2 << '\n';
}

int main() {
    printDouble(getValueFromUser());
    return 0;
}
