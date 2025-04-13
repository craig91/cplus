#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream f("input.txt");

    if (!f.is_open()) {
        cerr << "Error opening the file";
        return 1;
    }

    string s;

    while (getline(f, s))
        cout << s << endl;

    f.close();
    return 0;
}