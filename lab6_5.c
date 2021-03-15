#include <stdio.h>
int main()
{
    int w,h,i,j;
    scanf("%d %d",&w,&h);
    int g[h][w],p=0,mod,pay=0;

    for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
        {
            scanf("%d",&g[i][j]);
            p+=g[i][j];
        }
    }
    mod=p%(h*w);
    while(p%(h*w)!=0)
    {
        if(mod>=(h*w)/2)
        {
            p++;
            pay++;
        }
        if(mod<(h*w)/2)
        {
            p--;
            pay--;
        }



    }
    printf("%d",pay);
}
