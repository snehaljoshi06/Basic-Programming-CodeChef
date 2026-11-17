#include <iostream>
#include <string>
using namespace std;
int main(){string s;cin>>s;__int128 sum=0;for(size_t i=0;i<s.size();i++){int d=s[i]-'0';__int128 p=1;for(size_t j=0;j<=i;j++)p*=d;sum+=p;}long long n=stoll(s);cout<<(sum==n?"Disarium number":"Not a Disarium number")<<'\n';}