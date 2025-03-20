#include <iostream>

using namespace std;

void primeFactorization(int n) {
    cout << n << " = ";
    
    while (n % 2 == 0) {
        cout << 2;
        n /= 2;
        if (n > 1) cout << ", ";
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            cout << i;
            n /= i;
            if (n > 1) cout << ", ";
        }
    }
 
    if (n > 1) {
        cout << n;
    }
    
    cout << endl;
}

int main() {
    int number;
    cout << "Введіть число: ";
    cin >> number;

    if (number < 2) {
        cout << "Число більше 1 " << endl;
    } else {
        primeFactorization(number);
    }

    return 0;
}
