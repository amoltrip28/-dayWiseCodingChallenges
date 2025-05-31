#include <iostream>
#include <cmath>
using namespace std;

int bulbSwitch(int n) {
    return sqrt(n);
}

int main() {
    int n;
    cin >> n;
    cout << bulbSwitch(n) << endl;
    return 0;
}
