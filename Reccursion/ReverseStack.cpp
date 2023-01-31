#include <bits/stdc++.h>
using namespace std;
void insert(stack<int> &s,int temp){
    if(s.size()==0){
        s.push(temp);
        return;
    }
    int ele=s.top();
    s.pop();
    insert(s,temp);
    s.push(ele);
}
void reverse(stack<int> &s){
    if(s.size()==1)
    return;
    int ele=s.top();
    s.pop();
    reverse(s);
    insert(s,ele);
}
int main()
{
    stack<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    cout<<"Input :"<<endl;
    while(a.size()>0){
        cout<<a.top()<<" ";
        a.pop();
    }
    cout<<"\nAfter Reversing "<<endl;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    reverse(a);
    while(a.size()>0){
        cout<<a.top()<<" ";
        a.pop();
    }

    return 0;
}
