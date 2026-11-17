#include <iostream>
#include <vector>
using namespace std;
int main(){int n;cin>>n;vector<int>a(n);for(int&x:a)cin>>x;int l=0,m=0,r=n-1;while(m<=r){if(a[m]==0)swap(a[l++],a[m++]);else if(a[m]==1)m++;else if(a[m]==2)swap(a[m],a[r--]);else{cout<<"Invalid element\n";return 0;}}for(int i=0;i<n;i++)cout<<a[i]<<(i+1==n?'\n':' ');}