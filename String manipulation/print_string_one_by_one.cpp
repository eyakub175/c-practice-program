#include<stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter any string:\n");
    scanf("%s", str);

    printf("Entered string is:\n");

    for(i=0; str[i]!='\0'; i++)
    {

        printf("%c", str[i]);
    }

    return 0;
}
