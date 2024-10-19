#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        if ((pow(a, 2) == pow(b, 2) + pow(c, 2)) \
            || (pow(b, 2) == pow(a, 2) + pow(c, 2)) \
            || (pow(c, 2) == pow(b, 2) + pow(a, 2)))
            cout << "YES";
        else cout << "NO";
    }
    else {
        cout << "UNDEFINED";
    }
    return 0;
}
