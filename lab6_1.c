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
    for(i=0;i<n;i++)
    {
         for (j=i+1;j<n;j++)
         {
           if(word[i][0]>word[j][0])
            {
                strcpy(sort,word[i]);
                strcpy(word[i],word[j]);
                strcpy(word[j],sort);
            }
         }

    }
    for(i=0;i<n;i++)
    {
        puts(word[i]);
    }
}
