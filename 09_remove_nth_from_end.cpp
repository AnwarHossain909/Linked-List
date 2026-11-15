#include <iostream>
using namespace std;
struct Node{int value;Node*next;Node(int v):value(v),next(nullptr){}};
int main(){int size,n;cin>>size;Node dummy(0),*tail=&dummy;while(size--){int x;cin>>x;tail=tail->next=new Node(x);}cin>>n;Node*fast=&dummy,*slow=&dummy;for(int i=0;i<=n;++i)fast=fast->next;while(fast){fast=fast->next;slow=slow->next;}Node*removed=slow->next;slow->next=removed->next;delete removed;for(Node*p=dummy.next;p;p=p->next)cout<<p->value<<(p->next?' ':'\n');}
