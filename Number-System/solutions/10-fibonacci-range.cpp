#include <iostream>
#include <limits>
using namespace std;
int main(){long long l,r;cin>>l>>r;if(l<0||r<l){cout<<"Invalid range\n";return 0;}long long a=0,b=1;bool found=false;while(a<=r){if(a>=l){cout<<a<<' ';found=true;}if(b>numeric_limits<long long>::max()-a)break;long long c=a+b;a=b;b=c;}if(!found)cout<<"No Fibonacci numbers in the range";cout<<'\n';}