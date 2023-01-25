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
    vector<int> a ={7,91,10,34,56,78};
    int k=3;
    cout<<kthsmallest(a,k)<<endl;
    return 0;
}
