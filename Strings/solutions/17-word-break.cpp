#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;
int main(){string s;getline(cin,s);int n;cin>>n;cin.ignore();unordered_set<string>d;for(int i=0;i<n;i++){string w;getline(cin,w);d.insert(w);}vector<bool>dp(s.size()+1);dp[0]=true;for(size_t i=1;i<=s.size();i++)for(size_t j=0;j<i;j++)if(dp[j]&&d.count(s.substr(j,i-j))){dp[i]=true;break;}cout<<(dp[s.size()]?"Yes":"No")<<'\n';}