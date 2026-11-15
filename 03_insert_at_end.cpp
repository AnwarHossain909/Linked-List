#include <iostream>
using namespace std;
struct Node{int value;Node*next;Node(int v):value(v),next(nullptr){}};
int main(){int n;cin>>n;Node*head=nullptr,*tail=nullptr;while(n--){int x;cin>>x;Node*node=new Node(x);if(!head)head=tail=node;else tail=tail->next=node;}int value;cin>>value;Node*node=new Node(value);if(!head)head=node;else tail->next=node;for(Node*p=head;p;p=p->next)cout<<p->value<<(p->next?' ':'\n');}
