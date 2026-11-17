#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){string text,pat;getline(cin,text);getline(cin,pat);int n=text.size(),m=pat.size();if(m==0){cout<<"Empty pattern\n";return 0;}vector<int>last(256,-1);for(int i=0;i<m;i++)last[(unsigned char)pat[i]]=i;bool found=false;int shift=0;while(shift<=n-m){int j=m-1;while(j>=0&&pat[j]==text[shift+j])j--;if(j<0){cout<<shift<<' ';found=true;shift+=(shift+m<n?m-last[(unsigned char)text[shift+m]]:1);}else shift+=max(1,j-last[(unsigned char)text[shift+j]]);}if(!found)cout<<"No match";cout<<'\n';}