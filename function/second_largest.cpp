#include<bits/stdc++.h>
using namespace std;

void secondlarge(int arr[], int arr_size)
{


    int i, f, s;

    if(arr_size<2)
    {


        printf("Invalid Input");
        return ;
    }

    sort(arr, arr+arr_size);
    printf("%d", arr_size);
    for(i=arr_size-2; i>=0; i--)
    {
            //{12, 35, 1, 7, 7, 7}
        if(arr[i]!=arr[arr_size-1])
        {
            printf("The second largest element is %d:\n", arr[i]);
            return ;
        }

    }

    printf("There is no second largest element\n");

}





int main()
{
    int arr[]={12, 35, 1, 7, 7, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    secondlarge(arr, n);
    return 0;


}
