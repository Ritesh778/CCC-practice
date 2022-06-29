#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[100];
    scanf("%s",s);
    int n=strlen(s);
    int i=0;
    float c=0,total;
    while(s[i]!='\0')
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {
            c++;
        }
        i++;
    }
    total=(c*100)/n;
    printf("%.4f",total);
}
