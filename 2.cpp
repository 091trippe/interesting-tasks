#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Введіть кількість рядків: ";
    cin >> n;

    vector<vector<int>> pascal(n);

    for (int i = 0; i < n; i++) {
        pascal[i].resize(i + 1, 1); 

        
        for (int j = 1; j < i; j++) {
           
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n - i - 1; k++) {
            cout << "  ";
        }
        for (int j = 0; j < pascal[i].size(); j++) {
            cout << pascal[i][j] << "   ";
        }
        cout << "\n";
    }

    return 0;
}
