#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    vector<int> dp(N, 1); // dp 배열을 1로 초기화

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j]) { // 증가하는 순서인지 확인
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    int max_length = *max_element(dp.begin(), dp.end()); // 가장 긴 부분 수열 길이
    cout << max_length << endl;

    return 0;
}
