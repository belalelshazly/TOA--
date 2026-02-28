#include <iostream>
using namespace std;

void printRecursion(int n) {
    if (n == 0) return;         
    cout << "I love Recursion" << endl;
    printRecursion(n - 1);      
}

int main() {
    int N;
    cin >> N;
    printRecursion(N);
    return 0;
}