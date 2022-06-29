#include <stdio.h>
int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    long long res=a+b;
    if(res<(a+b)){
        printf("%.2f",a+b);
    }
    else{
        printf("%lld",res);
    }
}

