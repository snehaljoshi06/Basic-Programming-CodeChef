#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){int n;cin>>n;vector<vector<double>>a(n,vector<double>(n)),L(n,vector<double>(n)),U(n,vector<double>(n));for(auto&r:a)for(double&x:r)cin>>x;for(int i=0;i<n;i++){for(int k=i;k<n;k++){double sum=0;for(int j=0;j<i;j++)sum+=L[i][j]*U[j][k];U[i][k]=a[i][k]-sum;}for(int k=i;k<n;k++){if(i==k)L[i][i]=1;else{double sum=0;for(int j=0;j<i;j++)sum+=L[k][j]*U[j][i];if(abs(U[i][i])<1e-10){cout<<"LU decomposition without pivoting is not possible.\n";return 0;}L[k][i]=(a[k][i]-sum)/U[i][i];}}}cout<<fixed<<setprecision(4)<<"L matrix:\n";for(auto&r:L){for(double x:r)cout<<x<<' ';cout<<'\n';}cout<<"U matrix:\n";for(auto&r:U){for(double x:r)cout<<x<<' ';cout<<'\n';}}