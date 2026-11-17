#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
int largest(vector<int>&h){stack<int>s;int best=0,n=h.size();for(int i=0;i<=n;i++){int cur=(i==n?0:h[i]);while(!s.empty()&&h[s.top()]>cur){int height=h[s.top()];s.pop();int width=s.empty()?i:i-s.top()-1;best=max(best,height*width);}s.push(i);}return best;}
int main(){int r,c;cin>>r>>c;vector<int>h(c);int ans=0;for(int i=0;i<r;i++)for(int j=0;j<c;j++){int x;cin>>x;h[j]=x?h[j]+1:0;if(j==c-1)ans=max(ans,largest(h));}cout<<ans<<'\n';}