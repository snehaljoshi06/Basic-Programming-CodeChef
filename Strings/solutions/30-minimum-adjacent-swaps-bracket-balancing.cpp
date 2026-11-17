#include <iostream>
#include <string>
using namespace std;
int main(){string s;cin>>s;int open=0,close=0,imbalance=0,swaps=0;for(char c:s){if(c=='['){open++;if(imbalance>0){swaps+=imbalance;imbalance--;}}else{close++;imbalance=close-open;}}if(open!=close){cout<<"Invalid bracket counts\n";return 0;}cout<<swaps<<'\n';}