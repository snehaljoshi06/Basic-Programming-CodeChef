#include <iostream>
#include <numeric>
#include <cstdlib>
using namespace std;
int main(){long long a,b;cin>>a>>b;cout<<(gcd(llabs(a),llabs(b))==1?"Co-Prime numbers":"Not Co-Prime numbers")<<'\n';}