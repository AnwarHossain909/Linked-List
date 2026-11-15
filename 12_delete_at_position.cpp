#include <iostream>
using namespace std;struct Node{int v;Node*n;Node(int x):v(x),n(nullptr){}};int main(){int n;cin>>n;Node d(0),*t=&d;while(n--){int x;cin>>x;t=t->n=new Node(x);}int pos;cin>>pos;Node*p=&d;while(pos--&&p->n)p=p->n;if(p->n){Node*x=p->n;p->n=x->n;delete x;}for(Node*q=d.n;q;q=q->n)cout<<q->v<<(q->n?' ':'\n');}
