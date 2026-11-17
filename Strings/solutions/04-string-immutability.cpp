#include <iostream>
#include <string>
using namespace std;
int main(){string s="Hello";s[0]='Y';cout<<"C++ std::string is mutable. After changing the first character: "<<s<<'\n';cout<<"String immutability is a property of Java String, not C++ std::string.\n";}