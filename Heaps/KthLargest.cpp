#include <bits/stdc++.h>
using namespace std;
void kthlargest(vector<int> a,int k){
    priority_queue<int,vector<int>,greater<int>> b;
    for(int i=0;i<a.size();i++){
        b.push(a[i]);
        if(b.size()>k)
        b.pop();
    }
    while(b.size()!=0){
        cout<<b.top()<<" ";
        b.pop();
    }
}
int main()
{
    vector<int> a ={7,10,4,3,20,15};
    int k=3;
    kthlargest(a,k);
    return 0;
}
