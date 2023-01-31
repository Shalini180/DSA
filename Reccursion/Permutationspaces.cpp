#include <bits/stdc++.h>
using namespace std;
void solve(string ip,string op,set<string> &p){
    if(ip.length()==0){
       p.insert(op);
        return;
    }
    string op1=op;
    string op2=op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op1,p);
    solve(ip,op2,p);
}
int main()
{
    set<string> p;
    solve("ab","",p);
    for(auto &it:p)
    cout<<it<<" ";
    return 0;
}
