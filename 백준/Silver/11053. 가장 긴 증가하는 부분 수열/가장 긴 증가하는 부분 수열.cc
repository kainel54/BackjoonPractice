#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    vector<int> dp(N, 1);
    for (int i = 0;i < N;i++) {
        cin >> arr[i];
    }

    for (int i = 1;i < N;i++) {
        for (int j = 0;j < i;j++) {
            if (arr[i] > arr[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    int max_length = *max_element(dp.begin(), dp.end());
    cout << max_length << endl;

    return 0;
}
