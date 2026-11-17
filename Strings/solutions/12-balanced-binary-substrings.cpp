#include <iostream>
#include <string>
using namespace std;
int main(){string s;cin>>s;int balance=0,prev=0,ans=0;for(char c:s){balance+=(c=='1'?1:-1);if(balance==0){ans++;prev=0;}else if((balance>0&&prev<0)||(balance<0&&prev>0)){ans++;prev=balance;}}if(balance!=0)cout<<-1<<'\n';else cout<<ans<<'\n';}