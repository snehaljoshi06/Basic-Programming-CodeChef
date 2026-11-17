#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool prime(long long n){if(n<2)return false;if(n%2==0)return n==2;for(long long d=3;d<=n/d;d+=2)if(n%d==0)return false;return true;}
int main(){long long n;cin>>n;if(n<0){cout<<"Not a Twisted Prime number\n";return 0;}string s=to_string(n);reverse(s.begin(),s.end());long long r=stoll(s);cout<<(prime(n)&&prime(r)?"Twisted Prime number":"Not a Twisted Prime number")<<'\n';}