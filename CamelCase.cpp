#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int main()
{
    string str;
    cin>>str;
    int count=1;
    int i=0;
    int r=str.size();
    while(i<r)
    {
        if(str[i]>='A' && str[i]<='Z'){count++;}
        i++;
    }
    cout<<count<<"\n";
}

