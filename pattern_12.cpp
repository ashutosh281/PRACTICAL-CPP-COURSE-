#include <iostream>
using namespace std;

int main() {
    int i, j, k = 0, x;
    for (i = 1; i <= 9; i++) {
        i < 6 ? k++ : k--;
        x = 1;
        for (j = 1; j <= 5; j++) {
            if (j >= 6 - k) {
                cout << x;
                x++;
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
