#include <iostream>
#include <vector>
using namespace std;
int main(){int n;cin>>n;vector<long long>p,q;for(int i=0;i<n;i++){long long x;cin>>x;if(x>0)p.push_back(x);else if(x<0)q.push_back(x);else p.push_back(x);}vector<long long>v;size_t i=0,j=0;bool positive=true;while(i<p.size()&&j<q.size()){if(positive)v.push_back(p[i++]);else v.push_back(q[j++]);positive=!positive;}while(i<p.size())v.push_back(p[i++]);while(j<q.size())v.push_back(q[j++]);for(size_t z=0;z<v.size();z++)cout<<v[z]<<(z+1==v.size()?'\n':' ');}