#include <bits/stdc++.h>
using namespace std;
void solve(int o,int z,string op,vector<string> &v,int n){
    if(n==0){
        v.push_back(op);
        return;
    }
    string op1=op;
    op1.push_back('1');
    solve(o+1,z,op1,v,n-1);
    if(o>z){
        string op2=op;
        op2.push_back('0');
        solve(o,z+1,op2,v,n-1);
    }
}
vector<string> paranthesis(int n){
    int o=0;
    int z=0;
    vector<string> v;
    solve(o,z,"",v,n);
    return v;
}
int main()
{
    vector<string> c=paranthesis(4);
    for(int i=0;i<c.size();i++)
    cout<<c[i]<<" ";
    return 0;
}
