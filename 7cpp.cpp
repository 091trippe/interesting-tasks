#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void findTwinPrimes(int n) {
    for (int i = n; i <= 2 * n - 2; i++) {
        if (isPrime(i) && isPrime(i + 2)) {
            cout << i << " " << i + 2 << endl;
        }
    }
}

int main() {
    int n;
    cout << "Введіть число n: ";
    cin >> n;
    
    if (n < 1) {
        cout << "Число повинно бути більше 0" << endl;
    } else {
        findTwinPrimes(n);
    }
    
    return 0;
}
