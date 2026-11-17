#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){int n;cin>>n;long long mn=LLONG_MAX,profit=0,x;for(int i=0;i<n;i++){cin>>x;mn=min(mn,x);profit=max(profit,x-mn);}cout<<profit<<'\n';}