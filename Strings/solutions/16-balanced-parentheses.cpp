#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){string s;getline(cin,s);stack<char>st;bool ok=true;for(char c:s){if(c=='('||c=='['||c=='{')st.push(c);else if(c==')'||c==']'||c=='}'){if(st.empty()){ok=false;break;}char x=st.top();st.pop();if(!((x=='('&&c==')')||(x=='['&&c==']')||(x=='{'&&c=='}'))){ok=false;break;}}}cout<<(ok&&st.empty()?"true":"false")<<'\n';}