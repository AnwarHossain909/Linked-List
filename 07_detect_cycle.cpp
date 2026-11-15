#include <iostream>
#include <vector>
using namespace std;
struct Node{int value;Node*next;Node(int v):value(v),next(nullptr){}};
int main(){int n,cycleAt;cin>>n;vector<Node*>nodes;for(int i=0;i<n;++i){int x;cin>>x;nodes.push_back(new Node(x));if(i)nodes[i-1]->next=nodes[i];}cin>>cycleAt;if(cycleAt>=0&&cycleAt<n)nodes.back()->next=nodes[cycleAt];Node*slow=nodes.empty()?nullptr:nodes[0];Node*fast=slow;do{if(!fast||!fast->next){cout<<"false\n";return 0;}slow=slow->next;fast=fast->next->next;}while(slow!=fast);cout<<"true\n";}
