#include <iostream>
using namespace std;
int main(){long long n;cin>>n;if(n<=0){cout<<"Not an Ugly number\n";return 0;}for(int p:{2,3,5})while(n%p==0)n/=p;cout<<(n==1?"Ugly number":"Not an Ugly number")<<'\n';}