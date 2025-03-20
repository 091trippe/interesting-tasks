#include <iostream>
#include <string>

using namespace std;

bool Palindrome(int num) {
    string str = to_string(num);
    string rev_str = string(str.rbegin(), str.rend());
    return str == rev_str;
}

int main() {
    cout << "Паліндроми першої сотні, чий квадрат теж паліндром:" << endl;

    for (int i = 1; i < 100; i++) {
        if (Palindrome(i)) {
            int square = i * i;
            if (Palindrome(square)) { 
                cout << i << " -> " << square << endl;
            }
        }
    }

    return 0;
}
