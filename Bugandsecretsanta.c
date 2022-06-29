/**
 Bug's friends play Secret Santa. He has n friends. Lets number them from 1 to n. For each friend i he knows pi, the person that i gave a gift to. Bug needs to find out ri for each friend i, which is the person that i received a gift from.

Input Format

First line contains one number n. Second line contains n space separated integers.

Constraints

1 <= n <= 100

Output Format

Print n space-separated integers: the i-th number should equal the number of the friend who gave a gift to friend number i.

Sample Input 0

4
2 3 4 1
Sample Output 0

4 1 2 3 
Explanation 0

Ouput is

4 : because 1 received a gift from 4

1 : because 2 received a gift from 1

2 : because 3 received a gift from 2

3 : because 4 received a gift from 3
**/
#include<stdio.h>
int main() 
{   
    int n;
    scanf("%d",&n);
    int giftOrder[n],i,j;
    for(i=0;i<n;i++)
        scanf("%d",&giftOrder[i]);
    //Process the operation
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i == giftOrder[j])
            {
                printf("%d ",j+1);
                break;
            }
        }
    }
    return 0;
}

/**
            OR
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        b[a[i]-1]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    return 0;
}
**/