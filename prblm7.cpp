#include <iostream>
using namespace std;

void spaces(int n) {
    if (n == 0) return;
    cout << " ";
    spaces(n - 1);
}

void stars(int n) {
    if (n == 0) return;
    cout << "*";
    stars(n - 1);
}

void pyramid(int i, int n) {
    if (i > n) return;
    spaces(n - i);
    stars(2 * i - 1);
    cout << '\n';
    pyramid(i + 1, n);
}

int main() {
    int n;
    cin >> n;
    pyramid(1, n);
    return 0;
}