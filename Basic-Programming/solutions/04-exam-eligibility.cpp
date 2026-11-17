// CodeChef: CSC02A
#include <iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int x, y, a; cin >> x >> y >> a;
        cout << (a >= x && a < y ? "YES" : "NO") << '\n';
    }
}