#include <iostream>
using namespace std;

void binary_search(int a[], int start, int end, int num, int &count) {
    if (start > end) {
        cout << "Not Present " << count;
        return;
    }
    int mid = (start + end) / 2;
    count++;
    if (a[mid] == num) {
        cout << "Present " << count;
        return;
    }
    else if (num < a[mid])
        end = mid - 1;
    else
        start = mid + 1;
    binary_search(a, start, end, num, count);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, key, c = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cin >> key;
        binary_search(a, 0, n - 1, key, c);
        cout << "\n";
    }
    return 0;
}