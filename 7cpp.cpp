#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    int sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Введіть значення n: ";
    cin >> n;

    vector<int> primes;
    for (int i = n; i <= 2 * n; ++i) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }

    cout << "Пари простих чисел-близнюків у діапазоні від " << n << " до " << 2 * n << ":\n";
    bool found = false;
    for (size_t i = 0; i < primes.size() - 1; ++i) {
        if (primes[i + 1] - primes[i] == 2) {
            cout << "(" << primes[i] << ", " << primes[i + 1] << ")\n";
            found = true;
        }
    }

    if (!found) {
        cout << "Пар простих чисел-близнюків не знайдено.\n";
    }

    return 0;
}
