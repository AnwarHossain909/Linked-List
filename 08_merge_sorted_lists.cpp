#include <iostream>
using namespace std;
struct Node{int value;Node*next;Node(int v):value(v),next(nullptr){}};
Node*readList(){int n;cin>>n;Node dummy(0),*tail=&dummy;while(n--){int x;cin>>x;tail=tail->next=new Node(x);}return dummy.next;}
int main(){Node*a=readList(),*b=readList(),dummy(0),*tail=&dummy;while(a&&b){if(a->value<=b->value){tail=tail->next=a;a=a->next;}else{tail=tail->next=b;b=b->next;}}tail->next=a?a:b;for(Node*p=dummy.next;p;p=p->next)cout<<p->value<<(p->next?' ':'\n');}
