#include <iostream>
#include <vector>
using namespace std;
int main(){int n;cin>>n;if(n<0){cout<<"Invalid input\n";return 0;}vector<int>d(1,1);for(int x=2;x<=n;x++){int carry=0;for(int&i:d){int v=i*x+carry;i=v%10;carry=v/10;}while(carry){d.push_back(carry%10);carry/=10;}}for(auto i=d.rbegin();i!=d.rend();++i)cout<<*i;cout<<'\n';}