#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char word[n][10],sort[100];
    for(i=0;i<n;i++)
    {
        scanf("%s",&word[i]);
    }
    for(i=0;i<n-1;i++)
    {
            if(word[i][0]>word[i+1][0])
            {
                strcpy(sort,word[i+1]);
                strcpy(word[i],word[i+1]);
                strcpy(word[i],sort);
            }
    }
    for(i=0;i<n;i++)
    {
        puts(word[i]);
    }
}
