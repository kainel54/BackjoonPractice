#include<iostream>
#include<cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int sum = 0, closest = 0;
    for (int i = 0; i < 10; i++) {
        int mushroom;
        cin >> mushroom;
        sum += mushroom;
        if (abs(100 - sum) <= abs(100 - closest)) {
            closest = sum;
        }
    }
    cout << closest;
    return 0;
}
