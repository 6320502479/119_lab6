#include <stdio.h>

int main()
{
    int n,i,t,f;
    scanf("%d",&n);
    char num[2][n];
    for(i=0;i<2;i++)
    {
        scanf("%s",num[i]);
    }
    for(i=0;i<n;i++)
    {
        if(num[0][i]==num[1][i])
        {
            t++;
        }
    }
    f=n-t;
    printf("%d %d",t,f);
    return 0;
}
