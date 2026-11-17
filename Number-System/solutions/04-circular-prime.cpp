#include <iostream>
#include <string>
using namespace std;
bool prime(long long n){if(n<2)return false;if(n%2==0)return n==2;for(long long d=3;d<=n/d;d+=2)if(n%d==0)return false;return true;}
int main(){string s;cin>>s;bool ok=true;for(size_t i=0;i<s.size();i++){string r=s.substr(i)+s.substr(0,i);if(!prime(stoll(r))){ok=false;break;}}cout<<(ok?"Circular prime":"Not a circular prime")<<'\n';}