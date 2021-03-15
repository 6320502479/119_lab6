#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char word[n][10];
    for(i=0;i<n;i++)
    {
        scanf("%s",&word[i]);
    }
    for(i=0;i<n;i++)
    {
        puts(word[i]);
    }
}
