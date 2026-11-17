#include <iostream>
using namespace std;
bool neon(long long n){if(n<0)return false;__int128 v=(__int128)n*n;long long s=0;while(v){s+=(long long)(v%10);v/=10;}return s==n;}
int main(){long long n,l,r;cin>>n>>l>>r;cout<<(neon(n)?"Neon number":"Not a Neon number")<<'\n';cout<<"Neon numbers in range: ";bool any=false;if(l>=0&&r>=l&&r<=10000000)for(long long x=l;x<=r;x++)if(neon(x)){cout<<x<<' ';any=true;}if(!any)cout<<"None";cout<<'\n';}