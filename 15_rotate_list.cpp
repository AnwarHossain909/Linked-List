#include <iostream>
#include <vector>
using namespace std;int main(){int n,k;cin>>n>>k;vector<int>a(n);for(int&i:a)cin>>i;if(n)k%=n;for(int i=0;i<n;++i)cout<<a[(n-k+i)%n]<<(i+1==n?'\n':' ');}
