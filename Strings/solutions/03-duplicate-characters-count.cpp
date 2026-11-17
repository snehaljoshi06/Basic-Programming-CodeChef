#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){string s;getline(cin,s);map<char,int>f;for(char c:s)f[c]++;for(auto [c,n]:f)if(n>1)cout<<c<<" : "<<n<<'\n';}