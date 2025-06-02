#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n, int i = 2) {
    if (n <= 1) return false;
    if (i > sqrt(n)) return true;
    if (n % i == 0) return false;
    return isPrime(n, i + 1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (isPrime(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}