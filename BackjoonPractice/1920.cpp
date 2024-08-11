#include <iostream>
#include <algorithm>

using namespace std;

int m, n;
int arr[100001];

void binarySearch(int num) {
    int left = 0, right = n - 1, mid;
    while (true) {
        mid = (left + right) / 2;
        if (arr[mid] == num) {
            cout << "1" << "\n";
            break;
        }
        else if (right <= left) {
            cout << "0" << "\n";
            break;
        }

        if (arr[mid] > num) {
            right = mid - 1;
        }
        else if (arr[mid] < num) {
            left = mid + 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    int num;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> num;
        binarySearch(num);
    }
}