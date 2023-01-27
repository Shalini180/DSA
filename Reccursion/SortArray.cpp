#include <bits/stdc++.h>
using namespace std;
void insert(vector<int> &a,int temp){
    if(a.size()==0 || a[a.size()-1]<=temp){
        a.push_back(temp);
        return;
    }
    int val=a[a.size()-1];
    a.pop_back();
    insert(a,temp);
    a.push_back(val);
}
void sort(vector<int> &a){
    if(a.size()==1)
    return;
    int temp=a[a.size()-1];
    a.pop_back();
    sort(a);
    insert(a,temp);
}

int main(){
    vector<int> a={9,1,7,3,10,4,3,12};
    sort(a);
    for(int i=0;i<a.size();i++)
    cout<<a[i]<<" ";
    return 0;
}
