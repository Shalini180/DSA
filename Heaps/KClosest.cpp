#include <bits/stdc++.h>
using namespace std;
void kclosest(vector<int> a,int k,int x){
    priority_queue<pair<int,int>> b;
    for(int i=0;i<a.size();i++){
        b.push({abs(a[i]-x),a[i]});
        if(b.size()>k)
        {
            b.pop();
        }
    }
    while(b.size()!=0){
        cout<<b.top().second<<" ";
        b.pop();
    }
}
int main()
{
    vector<int> a ={5,6,7,8,9};
    int k=3;
    int x=7;
    kclosest(a,k,x);
    return 0;
}
