#include <iostream>
#include <string>
using namespace std;
void gen(const string&s,int i,string cur){if(i==(int)s.size()){if(!cur.empty())cout<<cur<<'\n';return;}gen(s,i+1,cur);gen(s,i+1,cur+s[i]);}
int main(){string s;getline(cin,s);gen(s,0,"");}