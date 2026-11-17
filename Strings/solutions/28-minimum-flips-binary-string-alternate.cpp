#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){string s;cin>>s;int a=0,b=0;for(int i=0;i<(int)s.size();i++){char x=(i%2?'1':'0'),y=(i%2?'0':'1');a+=s[i]!=x;b+=s[i]!=y;}cout<<min(a,b)<<'\n';}