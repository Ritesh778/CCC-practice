#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char ch[100005];
    scanf("%s",ch);
    int i=0;
    while(ch[i]!='\0')
    {
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
        {
            i++;
        }
        else{
            printf("%c",ch[i]);
            i++;
        }
    }
}
