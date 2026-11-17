#include <iostream>
#include <vector>
using namespace std;
int main(){int n;cin>>n;vector<long long>a(n);for(auto&x:a)cin>>x;int j=0;for(int i=0;i<n;i++)if(a[i]<0)swap(a[i],a[j++]);for(int i=0;i<n;i++)cout<<a[i]<<(i+1==n?'\n':' ');}