#include <iostream>
using namespace std;
struct Node{int value;Node*next;Node(int v,Node*n=nullptr):value(v),next(n){}};
int main(){int n;cin>>n;Node*head=nullptr,*tail=nullptr;while(n--){int x;cin>>x;Node*node=new Node(x);if(!head)head=tail=node;else tail=tail->next=node;}int value;cin>>value;head=new Node(value,head);for(Node*p=head;p;p=p->next)cout<<p->value<<(p->next?' ':'\n');}
