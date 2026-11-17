#include <iostream>
#include <string>
using namespace std;
int main(){string s;cin>>s;bool ok=!s.empty()&&s[0]!='0'&&s.find('0')!=string::npos;cout<<(ok?"Duck number":"Not a Duck number")<<'\n';}