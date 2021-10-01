#include <iostream>
using namespace std;

void linear_search(int a[], int l, int num) {
    int i, count = 0;
    for (i = 0; i < l; i++)
    {
        count++;
        if (a[i] == num) {
            cout << "Present " << count << "\n";
            return;
        }
    }
    cout << "Not Present " << count << "\n";
}

int main() {
    int T;
    cin >> T;
    while (T--)
    {
        int n, key;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cin >> key;
        linear_search(a, n, key);
    }
    return 0;
}