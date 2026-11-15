#include <iostream>
#include <vector>
using namespace std;int main(){int n;cin>>n;vector<int>a(n),b;for(int&i:a)cin>>i;int l=0,r=n-1;while(l<=r){b.push_back(a[l++]);if(l<=r)b.push_back(a[r--]);}for(int i=0;i<n;++i)cout<<b[i]<<(i+1==n?'\n':' ');}
