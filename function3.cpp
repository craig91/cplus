#include <iostream>
using namespace std;

int getValueFromUser() {
    cout << "Enter an integer: ";
    int input{};
    cin >> input;
    return input;
}

int main() {
    int x{ getValueFromUser() };
    int y{ getValueFromUser() };
    cout << x << " + " << y << " = " << x + y << '\n';
    return 0;
}