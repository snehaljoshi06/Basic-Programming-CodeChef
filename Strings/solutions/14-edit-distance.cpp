#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){string a,b;getline(cin,a);getline(cin,b);vector<vector<int>>d(a.size()+1,vector<int>(b.size()+1));for(int i=0;i<=a.size();i++)d[i][0]=i;for(int j=0;j<=b.size();j++)d[0][j]=j;for(int i=1;i<=a.size();i++)for(int j=1;j<=b.size();j++)d[i][j]=min({d[i-1][j]+1,d[i][j-1]+1,d[i-1][j-1]+(a[i-1]!=b[j-1])});cout<<d[a.size()][b.size()]<<'\n';}