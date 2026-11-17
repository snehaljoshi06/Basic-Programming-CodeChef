#include <iostream>
using namespace std;
int main(){long long n;cin>>n;bool ok=n>0&&(n%7==0||n%10==7);cout<<(ok?"Buzz number":"Not a Buzz number")<<'\n';}