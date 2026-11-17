#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main(){int n,k;cin>>n>>k;vector<vector<int>>a(n,vector<int>(n));int lo=INT_MAX,hi=INT_MIN;for(auto&r:a)for(int&x:r){cin>>x;lo=min(lo,x);hi=max(hi,x);}if(k<1||k>n*n){cout<<"Invalid k\n";return 0;}while(lo<hi){int mid=lo+(hi-lo)/2,count=0;for(int i=0;i<n;i++)count+=upper_bound(a[i].begin(),a[i].end(),mid)-a[i].begin();if(count<k)lo=mid+1;else hi=mid;}cout<<lo<<'\n';}