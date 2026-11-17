#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){int n;cin>>n;vector<string>a(n);for(auto&s:a)cin>>s;if(n==0){cout<<'\n';return 0;}string p=a[0];for(int i=1;i<n;i++){size_t j=0;while(j<p.size()&&j<a[i].size()&&p[j]==a[i][j])j++;p.resize(j);}cout<<p<<'\n';}