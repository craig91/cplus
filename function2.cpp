#include <iostream>
using namespace std;

void doB() {
    cout << "I'm doB()\n";
}

void doA() {
    cout << "Starting doA()\n";
    doB();
    cout << "Ending doA()\n";
}

int main() {
    cout << "Starting main()\n";
    doA();
    cout << "Ending main()\n";
    return 0;

}