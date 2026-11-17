#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){int n;cin>>n;vector<long long>a(n);for(auto&x:a)cin>>x;next_permutation(a.begin(),a.end());for(int i=0;i<n;i++)cout<<a[i]<<(i+1==n?'\n':' ');}