#include <iostream>
#include <string>
using namespace std;

string convertToTitle(int columnNumber) {
    string result;
    while (columnNumber > 0) {
        columnNumber--;
        char c = 'A' + (columnNumber % 26);
        result = c + result;
        columnNumber /= 26;
    }
    return result;
}

int main() {
    int columnNumber = 701;
    cout << convertToTitle(columnNumber) << endl;
    return 0;
}
