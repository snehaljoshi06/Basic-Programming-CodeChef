#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){int r,c;cin>>r>>c;double trace=0,sumSquares=0;for(int i=0;i<r;i++)for(int j=0;j<c;j++){double x;cin>>x;if(i==j)trace+=x;sumSquares+=x*x;}cout<<fixed<<setprecision(6)<<"Trace: "<<trace<<"\nNormal: "<<sqrt(sumSquares)<<'\n';}