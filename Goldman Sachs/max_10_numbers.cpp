#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=10;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    priority_queue<int,vector<int>,greater<int>> p;
    for(int i=0;i<n;i++){
        p.push(arr[i]);
        if(p.size()>k)
            p.pop();
    }
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
    return 0;
}
