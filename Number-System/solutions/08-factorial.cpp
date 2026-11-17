#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;using boost::multiprecision::cpp_int;
int main(){int n;cin>>n;if(n<0||n>1000){cout<<"Enter a number from 0 to 1000\n";return 0;}cpp_int f=1;for(int i=2;i<=n;i++)f*=i;cout<<f<<'\n';}