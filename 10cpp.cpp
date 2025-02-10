#include <iostream>
#include <vector>

using namespace std;

void findMagicVectors(int N, int index, int sum, int product, int last, vector<int>& current) {
    if (index == N) {
        if (sum == product) {
            for (int num : current) {
                cout << num << " ";
            }
            cout << endl;
        }
        return;
    }

    for (int i = last; i <= sum + 1; ++i) {  
        current.push_back(i);
        findMagicVectors(N, index + 1, sum + i, product * i, i, current);
        current.pop_back();
    }
}

int main() {
    int N;
    cout << "Введіть значення N: ";
    cin >> N;

    if (N <= 0) {
        cout << "N має бути більше 0." << endl;
        return 1;
    }

    vector<int> current;
    cout << "Чарівні вектори для N = " << N << ":" << endl;
    findMagicVectors(N, 0, 0, 1, 1, current);

    return 0;
}
