// CodeChef: GDTURN
#include <iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int x, y; cin >> x >> y;
        cout << (x + y > 6 ? "YES" : "NO") << '\n';
    }
}