#include <bits/stdc++.h>
using namespace std;
void kfrequent(vector<int> a,int k){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> b;
    unordered_map<int,int> c;
    for(int i=0;i<a.size();i++)
    c[a[i]]+=1;
    for(auto it=c.begin();it!=c.end();it++){
        b.push({it->second,it->first});
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
    vector<int> a ={1,1,1,3,2,2,4};
    int k=3;
    kfrequent(a,k);
    return 0;
}
