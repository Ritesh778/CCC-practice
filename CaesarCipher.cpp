#include <iostream>

using namespace std;

int main(){
    int num; cin >> num;
    string str; cin >> str;
    int k; cin >> k;
    int i=0;
    while(i <=num ) {
        if (str[i] >= 'A' && str[i] <= 'Z') 
        {
			str[i] = ((str[i] - 'A' + k) % 26) + 'A'; 
		} 
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = ((str[i] - 'a' + k) % 26) + 'a';
		}
		
	i++;
    }
    cout << str<< endl;
    return 0;
}
