#include <iostream>
#include <vector>
using namespace std;

void Pascals(int n) {
    vector<int> row(1, 1);

    for (int i = 0; i < n; ++i) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;

        vector<int> row2(i + 2, 1);
        for (int j = 1; j < i + 1; ++j) {
            row2[j] = row[j - 1] + row[j];
        }
        row = row2;
    }
}

int main() {
    int n = 10;
    Pascals(n);
    return 0;
}
