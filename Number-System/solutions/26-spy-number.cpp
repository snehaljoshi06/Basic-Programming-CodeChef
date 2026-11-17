#include <iostream>
using namespace std;
int main(){long long n;cin>>n;if(n<0){cout<<"Not a Spy number\n";return 0;}long long x=n,s=0,p=(n==0?0:1);while(x){int d=x%10;s+=d;p*=d;x/=10;}cout<<(s==p?"Spy number":"Not a Spy number")<<'\n';}