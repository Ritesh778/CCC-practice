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
	int a[n];
	for (int i = 1; i <= n; i++)
		scanf("%d",&a[i]);
	int q;
	scanf("%d",&q);
	while (q--)
	{
		int x, y;
	   scanf("%d %d",&x,&y);
		if ((x + 1 <= n) && (a[x + 1] == 0) && (x != y))
			printf("Odd\n");
		else if(a[x] % 2 == 0){printf("Even\n");}
		else printf("Odd");
	}
	return 0;
}
