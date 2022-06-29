/**
 You are given a sequence of N integers. These integers are to be stored in a matrix with M columns. They will be stored in row-major order.
Your task is to print the values of all the border elements.
A border element is the last element in any row.

Input
First line contains two integers N and M
Second line contains N space separated integers denoting the sequence.

Output
First line contains the border elements for row-major order.

See the sample case for clarity

Sample Input 0

6 3
1 2 3 4 5 6
Sample Output 0

3 6 
Explanation 0

row major representation is :
1 2 3
4 5 6

Border elements are :
3 6
**/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,m;
    scanf("%d%d",&n,&m);
    int c=m;
    int r=n/m;
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        printf("%d ",a[i][c-1]);
    }
    
    
}


/***
                            OR
                            
                            
                            
#include<stdio.h>
int main() 
{
    int numberOfElements, borderValue;
    scanf("%d%d",&numberOfElements,&borderValue);
    int arr[numberOfElements], i;
    for(i=0;i<numberOfElements;i++) scanf("%d",&arr[i]);
    
    for(i=borderValue-1; i<numberOfElements; i+=borderValue)
        printf("%d ",arr[i]);
    return 0;
}
**/