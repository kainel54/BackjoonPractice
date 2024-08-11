#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, arr[51], P[51];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int minIdx = 0;
    for (int i = 0; i < n; i++) {
        int min = 1001;
        for (int j = 0; j < n; j++) {
            if (arr[j] < min) {
                min = arr[j];
                minIdx = j;
            }
        }
        P[minIdx] = i;
        arr[minIdx] = 1001;
    }
    for (int i = 0; i < n; i++) {
        cout << P[i] << " ";
    }
}