#include <iostream>
#include <cmath>
#include <string>
using namespace std;


bool isPalindrome(int num) {
    string str = to_string(num); 
    int start = 0;
    int end = str.length() - 1;

   
    while (start < end) {
        if (str[start] != str[end]) {
            return false; 
        }
        start++;
        end--;
    }
    return true; 
}

int main() {
    
    for (int i = 1; i <= 99; i++) {
        if (isPalindrome(i)) { 
            int square = i * i; 
            if (isPalindrome(square)) { 
                cout << i << " " << square << endl; 
            }
        }
    }
    return 0;
}
