#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    for (auto& row : image) {
        int n = row.size();
        for (int i = 0; i < (n + 1) / 2; ++i) {
            int temp = row[i] ^ 1;
            row[i] = row[n - 1 - i] ^ 1;
            row[n - 1 - i] = temp;
        }
    }
    return image;
}

int main() {
    vector<vector<int>> image = {
        {1, 1, 0},
        {1, 0, 1},
        {0, 0, 0}
    };

    vector<vector<int>> result = flipAndInvertImage(image);

    cout << "Flipped and Inverted Image:" << endl;
    for (auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
