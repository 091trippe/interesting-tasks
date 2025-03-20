#include <iostream>
#include <vector>

using namespace std;

void findMagicVectors(vector<int> &vec, int N, int sum, int product, int last) {
    if (vec.size() == N) {
        if (sum == product) { 
            for (int num : vec) cout << num << " ";
            cout << endl;
        }
        return;
    }

    for (int i = last; i <= sum + 1; i++) {
        vec.push_back(i);
        findMagicVectors(vec, N, sum + i, product * i, i);
        vec.pop_back();
    }
}

int main() {
    int N;
    cout << "Введіть N: ";
    cin >> N;

    vector<int> vec;
    cout << "Чарівні вектори:\n";
    findMagicVectors(vec, N, 0, 1, 1);

    return 0;
}
