#include<stdio.h>
int main()
{
    int arr[100],sum=0, n, i,j;

    printf("Input the number of elements:\n");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {

        scanf("%d", &arr[i]);

        sum+=arr[i];

    }

    printf("%d\n", sum);


return 0;


}
