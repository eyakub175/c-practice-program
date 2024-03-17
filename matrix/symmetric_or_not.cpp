#include<stdio.h>
int main()
{
    int n, N, k=1, count=0;
    int arr[100][100], arr1[100][100];
    scanf("%d", &n);


    while(k<=n)
    {
         printf("N = ");
        scanf("%d", &N);


        for(int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
            {
                scanf("%d", &arr[i][j]);

            }
        }

        for(int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
            {
                arr1[j][i]=arr[i][j];

            }
        }
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
            {
                if(arr[i][j]!=arr1[i][j])

                ++count;
                break;
            }
        }
        if(count==0)
        {
            printf("Test #%d: Symmetric.\n", k);
        }
        else
        {
            printf("Test #%d:  Non-symmetric.\n", k);
        }

      k++;
    }

    return 0;


}
