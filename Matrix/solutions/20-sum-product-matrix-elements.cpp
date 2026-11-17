#include <iostream>
using namespace std;
int main(){int r,c;cin>>r>>c;long long sum=0,product=1;for(int i=0;i<r;i++)for(int j=0;j<c;j++){long long x;cin>>x;sum+=x;product*=x;}cout<<"Sum: "<<sum<<"\nProduct: "<<product<<'\n';}