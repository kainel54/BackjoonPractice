#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> vArr(31, vector<int>(31, 0));

    for (int i = 0; i < 31; i++) {
        vArr[i][0] = 1;
    }

    for (int i = 1; i < 31; i++) {
        for (int j = 1; j <= i; j++) {
            vArr[i][j] = vArr[i - 1][j - 1] + vArr[i - 1][j];
        }
    }

    int a, b;
    cin >> a >> b;

    cout << vArr[a - 1][b - 1] << endl;

    return 0;
}
