#include<stdio.h>
int addnum(int a, int b);

int main()
{
    int n1, n2, sum;
    printf("Enter two numbers:");
    scanf("%d %d", &n1, &n2);
    sum=addnum(n1, n2);
    printf("Sum = %d",sum);
    return 0;

}
int addnum(int a, int b)
{
    int result;
    result = a+b;
    return result;


}
