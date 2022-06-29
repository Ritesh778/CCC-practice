#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    vector<char>ch;
    int i = 0;
    while( i < (int)str.length())
    {
        if (!ch.empty() && ch.back() == str[i])
        {
            ch.pop_back();
        }
        else
        {
            ch.push_back(str[i]);
        }
      i++;
    }
    if (ch.empty())
    {
        cout<<"Empty String"<<"\n";
    }
    else
    {
        int i = 0;
        while( i < (int)ch.size())
        {
            cout<<ch[i]<<"\n";
            i++;
        }
        cout<<"\n";
    }
    return 0;
}
