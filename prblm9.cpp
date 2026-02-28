#include <iostream>
#include <string>
using namespace std;

int countVowels(const string& s, int i) {
    if (i == s.size()) return 0;
    char c = tolower(s[i]);
    int add = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    return add + countVowels(s, i + 1);
}

int main() {
    string s;
    getline(cin, s);
    cout << countVowels(s, 0);
    return 0;
}