#include <bits/stdc++.h>
using namespace std;
void KClosestPoint(vector<vector<int>> a,int k){
    priority_queue<pair<int,pair<int,int>>> b;
    for(int i=0;i<a.size();i++){
        int x=a[i][0]*a[i][0]+a[i][1]*a[i][1];
        b.push({x,{a[i][0],a[i][1]}});
        if(b.size()>k){
            b.pop();
        }
    }
    while(b.size()!=0){
        cout<<b.top().second.first<<" "<<b.top().second.second<<endl;
        b.pop();
    }
    
}
int main()
{
    vector<vector<int>> a ={{1,3},{-2,2},{5,8},{0,1},{1,0}};
    KClosestPoint(a,3);
    return 0;
}
