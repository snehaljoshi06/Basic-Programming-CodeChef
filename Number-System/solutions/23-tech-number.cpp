#include <iostream>
#include <string>
using namespace std;
int main(){string s;cin>>s;if(s.size()%2){cout<<"Not a Tech number\n";return 0;}int h=s.size()/2;long long a=stoll(s.substr(0,h)),b=stoll(s.substr(h)),n=stoll(s);__int128 sum=(__int128)a+b;cout<<(sum*sum==n?"Tech number":"Not a Tech number")<<'\n';}