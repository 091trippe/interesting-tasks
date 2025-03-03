#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 120; 
    vector<bool> omni (n + 1, true); 
    omni[0] = omni[1] = false; 

    for (int p = 2; p * p <= n; ++p) { 
        if (omni[p]) { 
            for (int multiple = p * p; multiple <= n; multiple += p) { 
                omni[multiple] = false;
            }
        }
    }

    for (int i = 2; i <= n; ++i) {
        if (omni[i]) {
          cout << i << " ";
        }
    }
   cout << std::endl;
    return 0;
}
