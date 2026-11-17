#include <iostream>
using namespace std;
int sumDigits(long long n){int s=0;while(n){s+=n%10;n/=10;}return s;}
int main(){long long n;cin>>n;if(n<=0){cout<<"Not a Magic number\n";return 0;}while(n>9)n=sumDigits(n); // Assumption: repeated digit sum ending at 1.
cout<<(n==1?"Magic number":"Not a Magic number")<<'\n';}