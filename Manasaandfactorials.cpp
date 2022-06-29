#include<bits/stdc++.h>
using namespace std;

long reduce(long n, long f) {
if(f > n) {
return n;
}
n = reduce(n, 5 * f + 1);
n -= n/f;
return n;
}
int main() {
int t;
long int n;
cin >> t;
while(t--){
cin >> n;
cout << reduce(n,6)*5 << endl;
}
return 0;
}
