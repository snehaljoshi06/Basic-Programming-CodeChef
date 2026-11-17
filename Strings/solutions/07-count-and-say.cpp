#include <iostream>
#include <string>
using namespace std;
int main(){int n;cin>>n;if(n<1||n>30){cout<<"Enter n from 1 to 30\n";return 0;}string s="1";for(int k=2;k<=n;k++){string t;for(size_t i=0;i<s.size();){size_t j=i;while(j<s.size()&&s[j]==s[i])j++;t+=to_string(j-i);t+=s[i];i=j;}s=t;}cout<<s<<'\n';}