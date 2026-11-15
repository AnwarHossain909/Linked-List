#include <iostream>
#include <vector>
using namespace std;int main(){int n;cin>>n;vector<int>a(n);for(int&i:a)cin>>i;for(int i=0;i<n/2;++i)if(a[i]!=a[n-1-i]){cout<<"false\n";return 0;}cout<<"true\n";}
