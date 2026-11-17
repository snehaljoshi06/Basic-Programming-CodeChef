#include <iostream>
#include <string>
using namespace std;
const string one[]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
const string ten[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
string part(int n){string s;if(n>=100){s+=one[n/100]+" hundred";n%=100;if(n)s+=" ";}if(n>=20){s+=ten[n/10];n%=10;if(n)s+="-"+one[n];}else if(n>0||s.empty())s+=one[n];return s;}
int main(){long long n;cin>>n;if(n==0){cout<<"zero\n";return 0;}if(n<0||n>999999999999LL){cout<<"Number out of supported range\n";return 0;}string out;long long div[]={1000000000LL,1000000LL,1000LL,1LL};string names[]={"billion","million","thousand",""};for(int i=0;i<4;i++){int v=n/div[i];n%=div[i];if(v){if(!out.empty())out+=" ";out+=part(v);if(names[i]!="")out+=" "+names[i];}}cout<<out<<'\n';}