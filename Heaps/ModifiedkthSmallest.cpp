#include <bits/stdc++.h>
using namespace std;
int kthsmallest(vector<int> a,int k){
    priority_queue<int> b;
    for(int i=0;i<a.size();i++){
        b.push(a[i]);
        if(b.size()>k)
        b.pop();
    }
    return b.top();
}
int main()
{
    vector<int> a={1,3,12,5,15,11};
    int f=kthsmallest(a,3);
    int s=kthsmallest(a,6);
    int c=0;
    for(int i=0;i<a.size();i++){
        if(a[i]>f && a[i]<s)
        c+=a[i];
    }
    cout<<c<<endl;
    return 0;
}
