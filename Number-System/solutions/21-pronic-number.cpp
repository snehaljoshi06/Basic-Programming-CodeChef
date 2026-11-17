#include <iostream>
using namespace std;
int main(){long long n;cin>>n;if(n<0){cout<<"Not a Pronic number\n";return 0;}long long x=0;while((__int128)x*(x+1)<n)++x;cout<<((__int128)x*(x+1)==n?"Pronic number":"Not a Pronic number")<<'\n';}