#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    long long int t=2;
    while(a--)
    {
        t=(t*t)%b;
    }
    cout<<t<<" ";
}