#include <iostream>
using namespace std;
struct Node{int value;Node*next;Node(int v):value(v),next(nullptr){}};
int main(){int n;cin>>n;Node dummy(0),*tail=&dummy;while(n--){int x;cin>>x;tail=tail->next=new Node(x);}int target;cin>>target;Node*prev=&dummy;while(prev->next&&prev->next->value!=target)prev=prev->next;if(prev->next){Node*removed=prev->next;prev->next=removed->next;delete removed;}for(Node*p=dummy.next;p;p=p->next)cout<<p->value<<(p->next?' ':'\n');}
