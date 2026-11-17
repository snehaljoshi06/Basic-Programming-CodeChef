#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){string s;getline(cin,s);sort(s.begin(),s.end());if(s.empty()){cout<<'\n';return 0;}do{cout<<s<<'\n';}while(next_permutation(s.begin(),s.end()));}