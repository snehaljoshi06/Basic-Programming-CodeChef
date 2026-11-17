#include <iostream>
#include <string>
using namespace std;
int main(){string a,b;getline(cin,a);getline(cin,b);cout<<(a.size()==b.size()&&(a+a).find(b)!=string::npos?"Yes":"No")<<'\n';}