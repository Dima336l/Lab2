#include <iostream>

using namespace std;

int main() {
    float price,tipPrecentage;
    cout << "Enter the price (pounds):" << endl;
    cin >> price;
    cout << "Enter the tip percentage :" << endl;
    cin >> tipPrecentage;
    float tip = (tipPrecentage / 100) * price;
    cout << "The tip is " << tip << endl;
    cout << "The total amount is " <<  price + tip << endl; 
    return 0;
}