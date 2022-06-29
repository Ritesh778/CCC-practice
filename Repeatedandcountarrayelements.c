#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int a[n],i,j,c;
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n-1;i++)
   {
       c=1;
       for(j=i+1;j<n;j++)
       {
           if(a[i]==0)
            continue;
           if(a[i]==a[j])
           {
               c++;
               a[j]=0;
           }
       }
       if(c>1){
       printf("%d",a[i]);
   }
   }
    return 0;
}

