#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){string s;getline(cin,s);vector<int>lps(s.size());for(int i=1,len=0;i<(int)s.size();){if(s[i]==s[len])lps[i++]=++len;else if(len)len=lps[len-1];else lps[i++]=0;}cout<<(lps.empty()?0:lps.back())<<'\n';}