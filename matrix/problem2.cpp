#include<stdio.h>
#define MAX_SIZE 100
int main()

{
    int n, k=0, l=0, m, i, j, a[MAX_SIZE][MAX_SIZE];

       scanf("%d", &n);

       for( i=0; i<n; i++)
        {
            for( j=0; j<n; j++)
            {
                scanf("%d", &a[i][j]);

            }
        }

     while (k < n && l < n)
        {


        for (i = l; i < n; ++i)
        {
            printf("%d ", a[k][i]);
        }
        k++;


        for (i = k; i < n; ++i)
        {
            printf("%d ", a[i][n - 1]);
        }
        n--;


        if (k < n)
        {
            for (i = n - 1; i >= l; --i)
            {
                printf("%d ", a[n - 1][i]);
            }
        n--;
        }


        if (l < n)
            {
            for (i = m - 1; i >= k; --i)
            {
                printf("%d ", a[i][l]);
            }
            l++;
        }
    }

return 0;


}
