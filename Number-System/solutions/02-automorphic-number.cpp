#include <iostream>
using namespace std;
int main(){unsigned long long n;cin>>n;unsigned long long mod=1,x=n;do{mod*=10;x/=10;}while(x);__uint128_t sq=(__uint128_t)n*n;cout<<(sq%mod==n?"Automorphic number":"Not an Automorphic number")<<'\n';}