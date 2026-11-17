#include <iostream>
#include <string>
using namespace std;
int main(){long long n;cin>>n;if(n<0){cout<<"Not an Armstrong number\n";return 0;}string s=to_string(n);__int128 sum=0;for(char c:s){int d=c-'0';__int128 p=1;for(size_t i=0;i<s.size();++i)p*=d;sum+=p;}cout<<(sum==n?"Armstrong number":"Not an Armstrong number")<<'\n';}