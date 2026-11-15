#include <iostream>
#include <vector>
using namespace std;int main(){int n,m;cin>>n;vector<int>a(n);for(int&i:a)cin>>i;cin>>m;vector<int>b(m);for(int&i:b)cin>>i;vector<int>out;int i=0,carry=0;while(i<n||i<m||carry){int sum=carry+(i<n?a[i]:0)+(i<m?b[i]:0);out.push_back(sum%10);carry=sum/10;++i;}for(int j=0;j<(int)out.size();++j)cout<<out[j]<<(j+1==(int)out.size()?'\n':' ');}
