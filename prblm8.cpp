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

void inverted(int i) {
    if (i == 0) return;
    stars(2 * i - 1);
    cout << '\n';
    spaces(1);
    inverted(i - 1);
}

int main() {
    int n;
    cin >> n;
    inverted(n);
    return 0;
}