#include <iostream>
using namespace std;
struct Node{int value;Node*prev;Node*next;Node(int v):value(v),prev(nullptr),next(nullptr){}};
int main(){int n;cin>>n;Node*head=nullptr,*tail=nullptr;while(n--){int x;cin>>x;Node*node=new Node(x);if(!head)head=tail=node;else{node->prev=tail;tail->next=node;tail=node;}}for(Node*p=tail;p;p=p->prev)cout<<p->value<<(p->prev?' ':'\n');}
