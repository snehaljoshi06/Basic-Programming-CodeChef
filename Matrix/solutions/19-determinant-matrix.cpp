#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){int n;cin>>n;vector<vector<double>>a(n,vector<double>(n));for(auto&r:a)for(double&x:r)cin>>x;double det=1;int sign=1;for(int i=0;i<n;i++){int p=i;for(int j=i+1;j<n;j++)if(abs(a[j][i])>abs(a[p][i]))p=j;if(abs(a[p][i])<1e-10){det=0;break;}if(p!=i){swap(a[p],a[i]);sign=-sign;}double pivot=a[i][i];det*=pivot;for(int j=i+1;j<n;j++){double f=a[j][i]/pivot;for(int k=i+1;k<n;k++)a[j][k]-=f*a[i][k];}}cout<<fixed<<setprecision(6)<<det*sign<<'\n';}