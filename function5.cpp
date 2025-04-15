#include <iostream>
using namespace std;


int val() {
    cout << "Enter a number: ";
    int num{};
    cin >> num;
    return num;
}

int doubleNumber(int x) {
    return x * 2;
}

int main() {
    cout << doubleNumber(val()) << '\n';
    return 0;
}