#include <iostream>
#include <unordered_set>
using namespace std;
int main(){int n;cin>>n;unordered_set<long long>s{0};long long sum=0,x;bool ok=false;for(int i=0;i<n;i++){cin>>x;sum+=x;if(s.count(sum))ok=true;s.insert(sum);}cout<<(ok?"Yes":"No")<<'\n';}