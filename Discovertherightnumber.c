#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ritesh(char *r){
    int k=0;
    while(r && *r){
        k=k*26+(*r)-'A'+1;
        r++;
    }
    return k;  
}
int main(void){
    char ch[100];
    scanf("%s",ch);
    printf("%d",ritesh(ch));
    return (0);
}
