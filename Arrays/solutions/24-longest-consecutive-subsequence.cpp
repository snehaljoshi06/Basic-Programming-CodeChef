#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;
int main(){int n;cin>>n;unordered_set<long long>s;for(int i=0;i<n;i++){long long x;cin>>x;s.insert(x);}int best=0;for(long long x:s)if(!s.count(x-1)){int len=1;while(s.count(x+len))len++;best=max(best,len);}cout<<best<<'\n';}