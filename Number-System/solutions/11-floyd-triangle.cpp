#include <iostream>
using namespace std;
int main(){int rows;cin>>rows;if(rows<1||rows>100){cout<<"Enter rows from 1 to 100\n";return 0;}long long v=1;for(int i=1;i<=rows;i++){for(int j=1;j<=i;j++)cout<<v++<<(j==i?'\n':' ');}}