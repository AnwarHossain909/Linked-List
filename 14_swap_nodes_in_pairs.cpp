#include <iostream>
using namespace std;struct Node{int v;Node*n;Node(int x):v(x),n(nullptr){}};int main(){int n;cin>>n;Node d(0),*t=&d;while(n--){int x;cin>>x;t=t->n=new Node(x);}for(Node*p=&d;p->n&&p->n->n;p=p->n->n){Node*a=p->n,*b=a->n;a->n=b->n;b->n=a;p->n=b;}for(Node*p=d.n;p;p=p->n)cout<<p->v<<(p->n?' ':'\n');}
