#include<stdio.h>
void ZerosAtEnd(int arr1[], int n)
{
    int ctr = 0;
    for (int i = 0; i < n; i++)
        if (arr1[i] != 0)
            arr1[ctr++] = arr1[i];
    while (ctr < n)
        arr1[ctr++] = 0;
}
void updateArrayRearrange(int arr1[], int n)
{
    if (n == 1)
        return;
    for (int i = 0; i < n - 1; i++)
	{
        if ((arr1[i] != 0) && (arr1[i] == arr1[i + 1]))
		{
            arr1[i] = 2 * arr1[i];
            arr1[i + 1] = 0;
            i++;
        }
    }
    ZerosAtEnd(arr1, n);
}
void ArrayPrinting(int arr1[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr1[i]);
    }

}

int main()
{
    int arr1[] = { 0, 3, 3, 3, 0, 0, 7,7, 0, 9 };
    int n = sizeof(arr1)/ sizeof(arr1[0]);
    printf("%d",n);
    printf("The given array is:  ");
    ArrayPrinting(arr1, n);
    updateArrayRearrange(arr1, n);
    printf("\nThe new array is: ");
    ArrayPrinting(arr1, n);
    return 0;
}
