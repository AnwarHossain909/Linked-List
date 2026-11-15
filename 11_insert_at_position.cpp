#include <iostream>
using namespace std;struct Node{int v;Node*n;Node(int x):v(x),n(nullptr){}};int main(){int n;cin>>n;Node d(0),*t=&d;while(n--){int x;cin>>x;t=t->n=new Node(x);}int pos,x;cin>>pos>>x;Node*p=&d;while(pos--&&p->n)p=p->n;Node*node=new Node(x);node->n=p->n;p->n=node;for(Node*q=d.n;q;q=q->n)cout<<q->v<<(q->n?' ':'\n');}
