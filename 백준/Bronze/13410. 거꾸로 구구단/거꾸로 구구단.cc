# include <iostream>
# include <string>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int result = 0;

    for (int i = 1; i <= k; i++) {
        int orig_num = i * n;
        string str_num = to_string(orig_num);

        for (int k = 0; k < str_num.size() / 2; k++) {
            char temp = str_num[k];
            str_num[k] = str_num[str_num.size()-1 - k];
            str_num[str_num.size()-1 - k] = temp;
        }

        int inv_num = stoi(str_num);
        if (inv_num > result) {
            result = inv_num;
        }
    }
    cout << result;
}