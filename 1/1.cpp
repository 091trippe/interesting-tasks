#include <iostream>

using namespace std;

void findTriples(int n) {
    for (int a = 1; a <= n; a++) {
        for (int b = 1; b <= n; b++) {
            int c = a * a + b * b; 
            if (c <= n) {
                cout << "(" << a << ", " << b << ", " << c << ")\n";
            }
        }
    }
}

int main() {
    int n;
    cout << "Введіть n: ";
    cin >> n;

    if (n <= 0) {
        cout << "n має бути більше 0!\n";
        return 1;
    }

    cout << "Трійки чисел (a, b, c), що задовольняють рівнянню:\n";
    findTriples(n);

    return 0;
}
