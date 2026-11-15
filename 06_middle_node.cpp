#include <iostream>
using namespace std;
struct Node{int value;Node*next;Node(int v):value(v),next(nullptr){}};
int main(){int n;cin>>n;Node*head=nullptr,*tail=nullptr;while(n--){int x;cin>>x;Node*node=new Node(x);if(!head)head=tail=node;else tail=tail->next=node;}Node*slow=head,*fast=head;while(fast&&fast->next){slow=slow->next;fast=fast->next->next;}if(slow)cout<<slow->value<<'\n';}
