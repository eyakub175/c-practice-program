#include<stdio.h>
void swap(int, int);

int main()
{
   int a=100;
   int b=200;
    /*printf("Enter two numbers:");
    scanf("%d %d", &n1, &n2);*/

   swap(a,b);

    printf("After swapping values in main n1 = %d, n2 = %d\n",a,b); // The value of actual parameters do not change by changing the formal parameters in call by value, a = 10, b = 20



}
void swap(int a, int b)
{
    int temp;
    temp = a;
    a=b;
    b=temp;
    printf("After swapping values in function a = %d, b = %d\n",a,b); // Formal parameters, a = 20, b = 10


}
