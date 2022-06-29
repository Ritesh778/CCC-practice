#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n,q; 
    cin >> n >> q;
    vector < vector <int>> arr(n);     //vector of vectors since it is two dimensonal array
    int lastanswer = 0;    //take lastanswer as 0 initally
    int query,x, y;   //read the type of query and read x and y values
    int idx= 0;   
    int i = 0;
    while(i < q)
    {
        cin>>query>> x >> y;
        idx = ((x ^ lastanswer) % n);      
        if (query == 1){               //query 1   Append the integer y  to  arr[idx].
            arr[idx].push_back(y);
        }
        else if (query== 2) {
            lastanswer = arr[idx][(y % arr[idx].size())];        //assign the arr[idx][k] to last answer
            cout << lastanswer << endl;        //Store the new value of lastanswer to an answers array.
        }
     i++;
    }
}

