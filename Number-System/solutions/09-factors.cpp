#include <iostream>
#include <vector>
using namespace std;
int main(){long long n;cin>>n;if(n<=0){cout<<"Enter a positive integer\n";return 0;}vector<long long>a,b;for(long long i=1;i<=n/i;i++)if(n%i==0){a.push_back(i);if(i!=n/i)b.push_back(n/i);}for(long long x:a)cout<<x<<' ';for(auto i=b.rbegin();i!=b.rend();++i)cout<<*i<<' ';cout<<'\n';}