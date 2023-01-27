#include <bits/stdc++.h>
using namespace std;
void deletemiddle(stack<int> &a,int k){
    if(a.size()==0)
    return;
    if(k==1){
        cout<<"Middle Element is "<<a.top()<<endl;
        a.pop();
        return;
    }
    int p=a.top();
    a.pop();
    deletemiddle(a,k-1);
    a.push(p);
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
    int k=a.size()/2+1;
    deletemiddle(a,k);
    while(a.size()>0){
        cout<<a.top()<<" ";
        a.pop();
    }
    return 0;
}
