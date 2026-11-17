#include <iostream>
#include <numeric>
#include <cstdlib>
using namespace std;
int main(){int n;cin>>n;if(n<1){cout<<"Invalid count\n";return 0;}long long g=0,x;for(int i=0;i<n;i++){cin>>x;g=gcd(g,llabs(x));}cout<<g<<'\n';}