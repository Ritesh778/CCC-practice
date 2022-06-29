// # s=input()
// # s1=set(s)
// # s1=list(s1)
// # l=[]
// # k={}
// # i=0
// # for i in range(len(s1)):                             gives frequencies
// #     l.append(s.count(s1[i]))
// # l=set(l)
// # print(l)
// # if(len(l)<=2):
// #     print("YES")
// # else:
// #     print("NO")

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'isValid' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isValid(string s) {
    map<char,int> m;
    vector<int> vec;
    for(int i =0;s[i]!='\0';i++)
        m[s[i]]++;
    for(auto &i : m)
        vec.push_back(i.second);  
    sort(vec.begin(),vec.end());  
    int n = vec.size();
    if(vec[0]==vec[n-1])
        return "YES";
    if(vec[0]==1 && vec[1]==vec[n-1])
        return "YES";
    if(vec[0]==vec[1] && vec[1]==vec[n-2] && vec[n-2]==vec[n-1]-1)
        return "YES";
    return "NO";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}


