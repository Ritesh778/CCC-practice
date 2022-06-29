#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{int t;
 cin>>t;
 while (t--)
    {int num;
	 cin>>num;
	 int val=sqrt(num);
	 int res=0;
	 for (int i=val-5;i<=val+5;i++)
	 	if (i*i <= num)
			res=i;
	if (res % 2 == 1) cout << "odd" << endl;
	else cout << "even" << endl;
	}
	return 0;
}
/**
#include<stdio.h>
#include<math.h>

int main(){
int t;
 scanf("%d",&t);
 while (t--)
    {
     long  int n;
	 scanf("%ld",&n);
	 long long int r=sqrt(n);
	 int ans=0;
     long int i=r-5;
	 while(i<=r+5)
     {
	 	if (n>=i*i)
        {
            ans=i;
        }
        i++;
     }
	   if (ans % 2 == 1) 
        {
           printf("odd\n");
        }
	   else
        {
            printf("even\n");
        }
	}
	return 0;
}
**/
