#include <iostream>
#include <string>

using namespace std;

int main() {
    string telephoneNumber;
    cout << "Enter the phone number:" << endl;
    cin >> telephoneNumber;
    cout << "(" << telephoneNumber.substr(0,3) << ") " << telephoneNumber.substr(3,4) << " " << telephoneNumber.substr(7,4) << endl;

    return 0;
}