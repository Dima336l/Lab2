#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x,y;
    cout << "Please enter two numbers:";
    cin >> x >> y;
    cout << "The sum of " << x << " and " << y << " is " << x + y << endl;
    cout << "The difference of " << x << " and " << y << " is " << x - y << endl;
    cout << "The product of " << x << " and " << y << " is " << x * y << endl;
    cout << "The distance of " << x << " and " << y << " is " << abs(x - y) << endl;
    cout << "The mean average of " << x << " and " << y << " is " << (x + y) / 2 << endl;
    return 0;
}