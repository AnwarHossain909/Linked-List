#include <iostream>
#include <vector>
using namespace std;int main(){int n;cin>>n;vector<int>a(n),b;for(int&i:a)cin>>i;for(int i=0;i<n;i+=2)b.push_back(a[i]);for(int i=1;i<n;i+=2)b.push_back(a[i]);for(int i=0;i<n;++i)cout<<b[i]<<(i+1==n?'\n':' ');}
