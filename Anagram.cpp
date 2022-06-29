#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'anagram' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int anagram(string s) {
    string a,b;
    int i=0,z=0,d;
   int v1[26]={0};
   int v2[26]={0};
    int n = s.length();
    if(s.length()%2!=0)
        return -1;
    else{
        a = s.substr(0,n/2);
        b = s.substr(n/2,n/2);
        for(i =0;i<int(a.length());i++){
            v1[a[i]-'a']++;
            v2[b[i]-'a']++;
        }
        for(i =0;i<26;i++){
            d = v1[i]-v2[i];
            if(d>0)
                z+=d;
        }    
    return z;
}

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = anagram(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

