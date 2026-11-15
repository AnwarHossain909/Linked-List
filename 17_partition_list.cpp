#include <iostream>
#include <vector>
using namespace std;int main(){int n,x;cin>>n>>x;vector<int>a(n),b;for(int&i:a)cin>>i;for(int v:a)if(v<x)b.push_back(v);for(int v:a)if(v>=x)b.push_back(v);for(int i=0;i<n;++i)cout<<b[i]<<(i+1==n?'\n':' ');}
