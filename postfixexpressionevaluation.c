/**
 Postfix Expression Evaluation 
A postfix expression is of the form instead of the traditional infix expression which follows the form .

Your task is to write a program that takes advantage of the stack data structure and calculates the value of a given postfix expression.

INPUT

First line contains one string denoting the postfix expression.
Second line contains space separated integers, each integer denotes the value of a variable, where the first integer denotes the value of the 'A', second integer denotes the value of 'B' and so on.
It is guaranteed that there will be as many integers on second line as there are distinct variables in the postfix expression and that they will be the initial characters of the capital letter alphabet.

Look at the sample Input/Output for clarity

OUTPUT

Output one number denoting the final value of the expression.

Sample Input 0

AB+
3 7
Sample Output 0

10
**/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int stack[100], top=-1;

void push(int n)
{
    stack[++top] = n;
}

int pop()
{
    return stack[top--];
}
int main() 
{
    char str[100];
    scanf("%s",str);
    int i=-1,x,y,z;
    while(str[++i])
    {
        if(isupper(str[i]))
        {
            int num;
            scanf("%d",&num);
            push(num);
        }
        else
        {
            x = pop();
            y = pop();
            switch(str[i])
            {
                case '+': z = y+x; break;
                case '-': z = y-x; break;
                case '*': z = y*x; break;
                case '/': z = y/x; break;
            }
            push(z);
        }
    }
    printf("%d",pop());
    return 0;
}
