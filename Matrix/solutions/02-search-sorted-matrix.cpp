#include <iostream>
#include <vector>
using namespace std;
int main(){int m,n;cin>>m>>n;vector<vector<long long>>a(m,vector<long long>(n));for(auto&r:a)for(auto&x:r)cin>>x;long long target;cin>>target;long long l=0,r=1LL*m*n-1;while(l<=r){long long mid=l+(r-l)/2,x=a[mid/n][mid%n];if(x==target){cout<<"true\n";return 0;}if(x<target)l=mid+1;else r=mid-1;}cout<<"false\n";}