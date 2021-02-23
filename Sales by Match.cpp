
#include <stdio.h>

int count[101];

int main()
{
    int n, i,pairs,ans=0,a[101];
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        count[a[i]-1]++;


    }

    for(i = 0; i < 101; i++)
    {

        pairs=count[i]/2;
        ans=ans+pairs;
    }
    printf("%d\n",ans);
    return 0;
}

n
