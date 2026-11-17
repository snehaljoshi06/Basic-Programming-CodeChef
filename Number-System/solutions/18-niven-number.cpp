#include <iostream>
using namespace std;
int main(){long long n;cin>>n;if(n<=0){cout<<"Not a Niven number\n";return 0;}long long x=n,s=0;while(x){s+=x%10;x/=10;}cout<<(n%s==0?"Niven number":"Not a Niven number")<<'\n';}