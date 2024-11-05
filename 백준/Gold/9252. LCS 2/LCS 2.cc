#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    int row = str1.size(), col = str2.size();
    vector<vector<int>> dp(row + 1, vector<int>(col + 1, 0));

    for (int i = 1; i <= row; ++i) {
        for (int j = 1; j <= col; ++j) {
            if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    stack<char> ans;
    int i = row, j = col;
    while (dp[i][j] != 0) {
        if (dp[i][j] == dp[i][j - 1]) {
            j--;  
        }
        else if (dp[i][j] == dp[i - 1][j]) {
            i--;  
        }
        else {
            ans.push(str1[i - 1]);  
            i--; j--;  
        }
    }
    cout << endl << dp[row][col];

    while (!ans.empty()) {
        cout << ans.top();
        ans.pop();
    }

    return 0;
}
