#include <iostream>
#include <cmath>
using namespace std;

bool judgeSquareSum(int c) {
    long a = 0, b = sqrt(c);
    while (a <= b) {
        long sum = a * a + b * b;
        if (sum == c) return true;
        else if (sum < c) a++;
        else b--;
    }
    return false;
}

int main() {
    int c = 5;
    if (judgeSquareSum(c)) cout << "Yes" << endl;
    else cout << "No" << endl; // Output: Yes
    return 0;
}
