#include <iostream>

using namespace std;
int main() {
    cout << "Please enter your first name and age\n";
    string first_name = "???";
    double age;
    cin >> first_name >> age;
    double ageInMonths = age * 12;
    cout << "Hello, " << first_name << " (age in months " << ageInMonths << ")\n";
}