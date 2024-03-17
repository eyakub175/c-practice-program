#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,37,40,5,7};
    int i = 3;
    arr[i]++;
    cout<<i<<" "<<arr[i]<<endl;
    arr[i++];
    cout<<i<<" "<<arr[i]<<endl;
    return 0;
}
