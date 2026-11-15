#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;int main(){int n;cin>>n;vector<int>a(n);for(int&i:a)cin>>i;stable_sort(a.begin(),a.end());for(int i=0;i<n;++i)cout<<a[i]<<(i+1==n?'\n':' ');}
