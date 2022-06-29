/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int b[n],max=0,count=0;
    int i=0;
    while(i<n)
    {
        scanf("%d",&b[i]);
        if(b[i]==max){
            count++;
        }
        else if(b[i]>max){
            max=b[i];
            count=1;
        }
        i++;
    }
    printf("%d",count);

    return 0;
}

