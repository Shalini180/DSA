#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> v,int k,int ind,int &ans){
    if(v.size()==1){
        ans=v[0];
        return;
    }
    ind=(ind+k)%v.size();
    v.erase(v.begin()+ind);
    solve(v,k,ind,ans);
}
int josephus(int n,int k){
    vector<int> a;
    for(int i=1;i<=n;i++)
    a.push_back(i);
    int ans=-1;
    solve(a,k-1,0,ans);
    return ans;
}
int main()
{
    cout<<josephus(40,7)<<endl;
    return 0;
}
