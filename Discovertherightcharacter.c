#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i,n,rem;
    scanf("%d",&n);
    char ch[100];
    i=0;
    while(n)
    {
        rem=65+(n-1)%26;
        n=(n-1)/26;
        ch[i]=rem;
        i++;
    }
    ch[i]='\0';
    for(i=strlen(ch)-1;i>=0;i--)
    {
        printf("%c",ch[i]);
    }
}
