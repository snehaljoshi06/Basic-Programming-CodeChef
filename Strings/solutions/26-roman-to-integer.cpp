#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main(){string s;cin>>s;unordered_map<char,int>v={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};int ans=0;for(size_t i=0;i<s.size();i++){if(!v.count(s[i])){cout<<"Invalid Roman numeral\n";return 0;}if(i+1<s.size()&&v[s[i]]<v[s[i+1]])ans-=v[s[i]];else ans+=v[s[i]];}cout<<ans<<'\n';}