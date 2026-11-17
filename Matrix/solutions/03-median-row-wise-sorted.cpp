#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main(){int r,c;cin>>r>>c;vector<vector<int>>a(r,vector<int>(c));int lo=INT_MAX,hi=INT_MIN;for(auto&row:a)for(int&x:row){cin>>x;lo=min(lo,x);hi=max(hi,x);}int need=(r*c)/2;while(lo<hi){int mid=lo+(hi-lo)/2,count=0;for(auto&row:a)count+=upper_bound(row.begin(),row.end(),mid)-row.begin();if(count<=need)lo=mid+1;else hi=mid;}cout<<lo<<'\n';}