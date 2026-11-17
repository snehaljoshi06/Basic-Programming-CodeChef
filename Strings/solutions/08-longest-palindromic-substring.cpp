#include <iostream>
#include <string>
using namespace std;
int main(){string s;getline(cin,s);int bestL=0,bestR=-1;auto expand=[&](int l,int r){while(l>=0&&r<(int)s.size()&&s[l]==s[r]){l--;r++;}l++;r--;if(r-l>bestR-bestL){bestL=l;bestR=r;}};for(int i=0;i<(int)s.size();i++){expand(i,i);expand(i,i+1);}if(bestR>=bestL)cout<<s.substr(bestL,bestR-bestL+1)<<'\n';else cout<<'\n';}