#include <iostream>
#include <numeric>
#include <cstdlib>
#include <climits>
using namespace std;
int main(){long long a,b;cin>>a>>b;if(a==0||b==0){cout<<0<<'\n';return 0;}__int128 v=(__int128)(llabs(a)/gcd(llabs(a),llabs(b)))*llabs(b);if(v>LLONG_MAX)cout<<"LCM exceeds 64-bit range\n";else cout<<(long long)v<<'\n';}