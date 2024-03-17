#include <stdio.h>
int main()
{
    while(1)
    {
        int a[100][100], i, j, n;
        scanf("%d", &n);
        if(n==0)
            break;
        else
            {
            for (i = 0; i < n; i++)
                for (j = 0; j < n; j++)
                    scanf("%d", &a[i][j]);
                int z=0,i=0,j=0;
                for(i=0;i<n;i++)
                {
                    int c=0;
                    for(j=0;j<n;j++)
                        c+=a[i][j];
                    if(c%2==1)
                    {
                        z++;
                        i=i+1;
                    }
                }
                if(z>1)
                {
                    printf("Corrupt\n");
                    continue;
                }
                z=0;
                for(j=0;j<n;j++)
                {
                    int c=0;
                    for(i=0;i<n;i++)
                        c+=a[i][j];
                    if(c%2==1)
                    {
                        z++;
                        j=j+1;
                    }
                }
                if(z>1)

                {
                    printf("Corrupt\n");
                    continue;
                }

                if(i==0&&j==0)

                    printf("OK\n");

                else

                    printf("Change bit (%d,%d)\n",i,j);
            }
    }
}
