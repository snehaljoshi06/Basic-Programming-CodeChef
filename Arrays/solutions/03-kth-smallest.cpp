#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){int n,k;cin>>n;vector<long long>a(n);for(auto&x:a)cin>>x;cin>>k;if(k<1||k>n){cout<<"Invalid k\n";return 0;}nth_element(a.begin(),a.begin()+k-1,a.end());cout<<a[k-1]<<'\n';}