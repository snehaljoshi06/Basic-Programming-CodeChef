#include <iostream>
#include <vector>
using namespace std;
int main(){int n,m;cin>>n>>m;vector<long long>a(n),b(m);for(auto&x:a)cin>>x;for(auto&x:b)cin>>x;int gap=(n+m+1)/2;while(gap>0){int i=0,j=gap;while(j<n+m){long long &x=(i<n?a[i]:b[i-n]);long long &y=(j<n?a[j]:b[j-n]);if(x>y)swap(x,y);i++;j++;}if(gap==1)break;gap=(gap+1)/2;}for(auto x:a)cout<<x<<' ';cout<<'\n';for(auto x:b)cout<<x<<' ';cout<<'\n';}