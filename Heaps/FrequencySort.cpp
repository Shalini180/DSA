#include <bits/stdc++.h>
using namespace std;
void frequencysort(vector<int> a){
    priority_queue<pair<int,int>> b;
    unordered_map<int,int> c;
    for(int i=0;i<a.size();i++)
    c[a[i]]+=1;
    for(auto it=c.begin();it!=c.end();it++){
        b.push({it->second,it->first});
    }
    while(b.size()!=0){
        int k=0;
        while(k<b.top().first){
         cout<<b.top().second<<" ";
         k++;
        }
        b.pop();
    }
}
int main()
{
    vector<int> a ={1,1,1,3,2,2,4};
    frequencysort(a);
    return 0;
}
