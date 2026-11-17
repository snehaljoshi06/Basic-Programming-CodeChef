#include <iostream>
#include <string>
using namespace std;
int main(){string s;cin>>s;long long p=1;bool any=false;for(char c:s)if(c>='0'&&c<='9'){p*=c-'0';any=true;}cout<<(any?p:0)<<'\n';}