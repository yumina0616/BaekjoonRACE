# include <iostream>
using namespace std;

int main() {
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    int length = s1 + s2 + s3 + 1;
    int * list = new int[length];
    for (int i = 0; i < length; i++) {
        list[i] = 0;
    }

    for (int i = 1; i <= s1; i++) {
        for (int j = 1; j <= s2; j++) {
            for (int k = 1; k <= s3; k++) {
                list[i + j + k]++;
            }
        }
    }

    int max = 0;
    int result;
    for (int i = length-1; i >= 3 ; i--) {
        if (max <= list[i]) {
            max = list[i];
            result = i;
        }
    }
    cout << result;
    delete[] list;
}