#include <iostream>
#include <string>
using namespace std;
int main(){string s;getline(cin,s);string key[]={"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7","77","777","7777","8","88","888","9","99","999","9999"};for(char c:s){if(c==' ')cout<<"0";else if(c>='a'&&c<='z')cout<<key[c-'a'];else if(c>='A'&&c<='Z')cout<<key[c-'A'];}cout<<'\n';}