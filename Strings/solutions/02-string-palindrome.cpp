#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){string s;getline(cin,s);string r=s;reverse(r.begin(),r.end());cout<<(s==r?"Palindrome":"Not Palindrome")<<'\n';}