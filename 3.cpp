#include <iostream>
#include <vector>

using namespace std;

void sieve_of_eratosthenes(int n, vector<bool>& is_prime) {
    is_prime.assign(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

void factorize(int num) {
    vector<bool> is_prime;
    sieve_of_eratosthenes(num, is_prime);
    vector<int> factors;

    for (int i = 2; i <= num; ++i) {
        while (is_prime[i] && num % i == 0) {
            factors.push_back(i);
            num /= i;
        }
    }

    cout << "Розклад числа: ";
    for (size_t i = 0; i < factors.size(); ++i) {
        if (i > 0) cout << ", ";
        cout << factors[i];
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Введіть число для розкладу на прості множники: ";
    cin >> n;
    factorize(n);
    return 0;
}