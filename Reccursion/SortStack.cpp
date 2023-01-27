#include <bits/stdc++.h>
using namespace std;
void insert(stack<int> &a,int temp){
    if(a.size()==0 ||a.top()<=temp){
        a.push(temp);
        return;
    }
    int val=a.top();
    a.pop();
    insert(a,temp);
    a.push(val);
}
void sort(stack<int> &a){
    if(a.size()==1)
    return;
    int temp=a.top();
    a.pop();
    sort(a);
    insert(a,temp);
}

int main(){
    stack<int> a;
    a.push(9);
    a.push(1);
    a.push(7);
    a.push(3);
    a.push(10);
    a.push(4);
    a.push(12);
    sort(a);
    while(a.size()>0){
        cout<<a.top()<<" ";
        a.pop();
    }
    return 0;
}
