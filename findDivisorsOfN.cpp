#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,s;

    scanf("%d",&n);

    s = sqrt(n);

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            printf("%d ",i);
    }

    return 0;
}
