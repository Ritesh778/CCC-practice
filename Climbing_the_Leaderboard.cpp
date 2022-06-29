#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        // cin>>ranked[i];
        int x;cin>>x;s.insert(x);
    }
    int m;
    cin>>m;
    // vector<int>player(m);
    // for(int i=0;i<m;i++)
    // { //int x;cin>>x;pl.push_back(x);
    //     cin>>player[i];
    // }
    vector<int>r(s.begin(),s.end());
    
    for(int i=0;i<m;i++)
    {
        int y;cin>>y;
        int pl  = upper_bound(r.begin(),r.end(),y)-r.begin();
        cout<<r.size()-pl+1<<" \n";
        // cout<<s[i]<<endl;
    }
}