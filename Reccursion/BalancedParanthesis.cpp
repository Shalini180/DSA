#include <bits/stdc++.h>
using namespace std;
void solve(int o,int cl,string op,vector<string> &v){
    if(o==0 && cl==0){
        v.push_back(op);
        return;
    }
    
    if(o!=0){
        string op1=op;
        op1.push_back('(');
        solve(o-1,cl,op1,v);
    }
    if(cl>o){
        string op2=op;
        op2.push_back(')');
        solve(o,cl-1,op2,v);
    }
}
vector<string> paranthesis(int n){
    int op=n;
    int cl=n;
    vector<string> v;
    solve(op,cl,"",v);
    return v;
}
int main()
{
    vector<string> c=paranthesis(3);
    for(int i=0;i<c.size();i++)
    cout<<c[i]<<" ";
    return 0;
}
