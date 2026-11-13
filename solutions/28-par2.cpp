// CodeChef: PAR2
#include <iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << (n % 2 == 0 ? "YES" : "NO") << '\n';
    }
}