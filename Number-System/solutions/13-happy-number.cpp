#include <iostream>
#include <unordered_set>
using namespace std;
long long nextValue(long long n){long long s=0;while(n){int d=n%10;s+=d*d;n/=10;}return s;}
bool happy(long long n){if(n<=0)return false;unordered_set<long long> seen;while(n!=1&&!seen.count(n)){seen.insert(n);n=nextValue(n);}return n==1;}
int main(){int n;cin>>n;if(n<1){cout<<"Invalid count\n";return 0;}bool found=false;for(int i=0;i<n;i++){long long x;cin>>x;if(happy(x)){cout<<x<<' ';found=true;}}if(!found)cout<<"No happy numbers";cout<<'\n';}