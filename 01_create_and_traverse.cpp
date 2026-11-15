#include <iostream>
using namespace std;
struct Node{int value;Node*next;Node(int v):value(v),next(nullptr){}};
int main(){int n;cin>>n;Node*head=nullptr,*tail=nullptr;while(n--){int value;cin>>value;Node*node=new Node(value);if(!head)head=tail=node;else tail=tail->next=node;}for(Node*node=head;node;node=node->next)cout<<node->value<<(node->next?' ':'\n');}
