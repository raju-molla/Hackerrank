#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    vector<int>v,v2;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=d; i<v.size(); i++ )
    {
        v2.push_back(v[i]);
    }
    for(int i=0; i <d; i++)
    {
        v2.push_back(v[i]);
    }
    for(int i=0; i<v2.size(); i++)
    {
        cout<<v2[i]<< " ";
    }
    cout<<endl;
}
