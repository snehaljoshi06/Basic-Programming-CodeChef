#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){int n;long long target;cin>>n>>target;vector<long long>a(n);for(auto&x:a)cin>>x;sort(a.begin(),a.end());bool found=false;for(int i=0;i<n-2&&!found;i++){int l=i+1,r=n-1;while(l<r){long long s=a[i]+a[l]+a[r];if(s==target){found=true;break;}if(s<target)l++;else r--;}}cout<<(found?"Yes":"No")<<'\n';}