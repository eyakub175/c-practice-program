#include<stdio.h>
int main()
{
    int arr[100], arr1[100], sum=0, n, i,j;

    printf("Input the number of elements:\n");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {

        scanf("%d", &arr[i]);

        arr1[i]=arr[i];
    }

    for(i=0; i<n; i++)
    {
        printf("%d ", arr1[i]);
    }


return 0;


}

