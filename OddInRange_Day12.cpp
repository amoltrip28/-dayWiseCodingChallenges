#include <iostream>
using namespace std;

int countOdds(int low, int high) {
    return (high - low) / 2 + (low % 2 || high % 2);
}

int main() {
    int low = 3, high = 7;
    cout << countOdds(low, high) << endl;
    return 0;
}
