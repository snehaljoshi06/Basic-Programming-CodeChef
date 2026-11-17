#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){int n;cin>>n;vector<long long>a(n);for(auto&x:a)cin>>x;int l=0,r=n-1;long long lm=0,rm=0,water=0;while(l<=r){if(a[l]<=a[r]){if(a[l]>=lm)lm=a[l];else water+=lm-a[l];l++;}else{if(a[r]>=rm)rm=a[r];else water+=rm-a[r];r--;}}cout<<water<<'\n';}