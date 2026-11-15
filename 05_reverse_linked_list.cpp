#include <iostream>
using namespace std;
struct Node{int value;Node*next;Node(int v):value(v),next(nullptr){}};
int main(){int n;cin>>n;Node*head=nullptr,*tail=nullptr;while(n--){int x;cin>>x;Node*node=new Node(x);if(!head)head=tail=node;else tail=tail->next=node;}Node*previous=nullptr;while(head){Node*next=head->next;head->next=previous;previous=head;head=next;}for(Node*p=previous;p;p=p->next)cout<<p->value<<(p->next?' ':'\n');}
