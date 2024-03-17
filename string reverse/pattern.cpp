#include<stdio.h>

//function to get string length
int stringLength(char text[])
{
    int length=0,i;

    for(i=0; text[i]!='\0'; i++)
        length++;
    return length;
}
int main()
{
    char string[]="Hello";
    int i,j,length;

    //get string length
    length=stringLength(string);

    //print string in patter
    for(i=0; i<=length ;i++)
    {
        /*run inner loop to print string characters
        in columns*/
        for(j=0; j<i; j++)
            printf("%c",string[j]);

        //print new line after each row
        printf("\n");
    }

    return 0;
}
