#include <iostream>
#include <vector>
using namespace std;
int main(){int r,c;cin>>r>>c;vector<vector<long long>>a(r,vector<long long>(c));for(auto&row:a)for(auto&x:row)cin>>x;int top=0,bottom=r-1,left=0,right=c-1;while(top<=bottom&&left<=right){for(int j=left;j<=right;j++)cout<<a[top][j]<<' ';top++;for(int i=top;i<=bottom;i++)cout<<a[i][right]<<' ';right--;if(top<=bottom){for(int j=right;j>=left;j--)cout<<a[bottom][j]<<' ';bottom--;}if(left<=right){for(int i=bottom;i>=top;i--)cout<<a[i][left]<<' ';left++;}}cout<<'\n';}