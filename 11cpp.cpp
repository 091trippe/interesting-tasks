#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int findMedian(vector<int>& coords) {
    sort(coords.begin(), coords.end());
    int n = coords.size();
    if (n % 2 == 1) {
        return coords[n / 2];
    }
    else {
        return (coords[n / 2 - 1] + coords[n / 2]) / 2;
    }
}

int main() {
    int N;
    cout << "Введіть кількість міст N: ";
    cin >> N;

    vector<int> x_coords(N), y_coords(N);

    cout << "Введіть координати міст (x y):" << endl;
    for (int i = 0; i < N; ++i) {
        cin >> x_coords[i] >> y_coords[i];
    }

    int capital_x = findMedian(x_coords);
    int capital_y = findMedian(y_coords);

    cout << "Координати столиці: (" << capital_x << ", " << capital_y << ")" << endl;

    return 0;
}
