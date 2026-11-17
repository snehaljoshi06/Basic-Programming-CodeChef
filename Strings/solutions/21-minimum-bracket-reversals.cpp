#include <iostream>
#include <string>
using namespace std;
int main(){string s;cin>>s;if(s.size()%2){cout<<-1<<'\n';return 0;}int open=0,close=0;for(char c:s){if(c=='{')open++;else if(open>0)open--;else close++;}cout<<(open+1)/2+(close+1)/2<<'\n';}