# include <iostream>
# include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    while (n > 1) {
        n = n / 2;
        count++;
    }

    cout << pow(2, count);
}