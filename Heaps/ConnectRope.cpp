#include <bits/stdc++.h>
using namespace std;
int connectropes(vector<int> a){
    priority_queue<int,vector<int>,greater<int>> b;
    for(int i=0;i<a.size();i++)
    b.push(a[i]);
    int c=0;
    while(b.size()>=2){
       int f=b.top();
       b.pop();
       int s=b.top();
       b.pop();
       c+=f+s;
       b.push(f+s);
    }
    return c;
}
int main()
{
    vector<int> a={1,2,3,4,5};
    cout<<connectropes(a)<<endl;
    return 0;
}
