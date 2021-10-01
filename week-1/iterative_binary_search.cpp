#include <iostream>
using namespace std;

void binary_search(int a[], int l, int num) {
    int start = 0, end = l - 1, mid, count = 0;
    while (start <= end) {
        mid = (start + end) / 2;
        count++;
        if (a[mid] == num) {
            cout << "Present " << count << "\n";
            return;
        }
        else if (num < a[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    cout << "Not Present " << count << "\n";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, key;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cin >> key;
        binary_search(a, n, key);
    }
    return 0;
}