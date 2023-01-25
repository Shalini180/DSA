#include <bits/stdc++.h>
using namespace std;
vector<int> ksorted(vector<int> a,int k){
    priority_queue<int,vector<int>,greater<int>> b;
    vector<int> c;
    for(int i=0;i<a.size();i++){
        b.push(a[i]);
        if(b.size()>k)
        {
            c.push_back(b.top());
            b.pop();
        }
    }
    while(b.size()!=0){
        c.push_back(b.top());
        b.pop();
    }
    return c;
}
int main()
{
    vector<int> a ={6,5,3,2,8,10,9};
    int k=3;
    vector<int> c;
    c=ksorted(a,k);
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
    return 0;
}
