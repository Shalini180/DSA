#include <bits/stdc++.h>
using namespace std;
void towerhanoi(int s,int d,int h,int n){
    if(n==1)
    {
        cout<<"Moving plate from s to d"<<endl;
        return;
    }
    towerhanoi(s,h,d,n-1);
    cout<<"Moving Nth from s to d"<<endl;
    towerhanoi(h,d,s,n-1);
}
int main()
{
    int s=1;
    int h=2;
    int d=3;
    towerhanoi(s,d,h,3);

    return 0;
}
