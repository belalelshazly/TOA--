#include <iostream>
using namespace std;

void printEvenReverse(long long a[], int n, int i = 0) {
    if (i >= n) return;
    printEvenReverse(a, n, i + 2);
    cout << a[i] << " ";
}

int main() {
    int n;
    cin >> n;
    long long a[1005];
    for (int i = 0; i < n; i++) cin >> a[i];
    printEvenReverse(a, n);
    return 0;
}