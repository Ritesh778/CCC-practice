/**
 Find the XOR of two numbers and print it.

Hint : Input the numbers as strings.

Input Format

First line contains first number X and second line contains second number Y.
The numbers will be given to you in binary form.

Constraints

0 <= X <= 2^1000
0 <= Y <= 2^1000

Output Format

Output one number in binary format, the XOR of two numbers.

Sample Input 0

11011
10101
Sample Output 0

01110   **/
#include<stdio.h>
int main() 
{
    char str1[10000000], str2[10000000], temp[10000000];
    scanf("%s\n%s",str1,str2);
    int l1 = strlen(str1), l2 = strlen(str2),i;
    /*
        str1 => 101010101   -> 9
        str2 => 000010100       -> 5
    */
    if(l1 != l2)
    {
        int j = 0;
        if(l1 > l2)
        {
            while(l1-- - l2 > 0)
                temp[j++] = '0';//Filling zeros
            
            for(i=0;str2[i];i++)
                temp[j++] = str2[i];//Copying content of str2 into temp
            temp[j] = '\0';
            
            for(i=0;str1[i];i++) //str1[i] => str1[i]!='\0'
                str1[i]!=temp[i] ? printf("1") : printf("0");
        }
        else
        {
            while(l2-- - l1 > 0)
                temp[j++] = '0';
            
            for(i=0;str1[i];i++)
                temp[j++] = str1[i];
            temp[j] = '\0';
            
            for(i=0;str2[i];i++) //str1[i] => str1[i]!='\0'
                str2[i]!=temp[i] ? printf("1") : printf("0");
        }
    }
    else
    {
        for(i=0;str1[i];i++) //str1[i] => str1[i]!='\0'
            str1[i]!=str2[i] ? printf("1") : printf("0");
    }
    return 0;
}
