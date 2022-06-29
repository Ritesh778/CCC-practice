#include <iostream>
using namespace std;
int marsExploration(string s) {
    int i=0,y=0;
    while(s[i]!='\0'){
        if(s[i]!='A'&&s[i]!='B'){
            y++;
        }
        i++;
    }
    return y;
}
int main() {
cout << marsExploration("ABCD");
return 0;
}
