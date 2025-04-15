#include <iostream>
using namespace std;

int returnFive() {
    return 5;
}

int main() {
    cout << returnFive() << '\n';
    cout << returnFive() + 2 << '\n';
    returnFive();
    return 0;
}