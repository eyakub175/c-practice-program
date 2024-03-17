/*C program to reverse string in same variable,
without using  another string variable to reverse.*/

#include<stdio.h>

//Function to get string length
int stringLength(char str[])
{
    int len=0,i;
    for(i=0;str[i]!='\0';i++)
        len++;
    return len;
}
int main()
{
    char text[100],tempChar;
    int i,length;

    printf("Enter any string: ");
    gets(text);

    printf("Entered String is: %s\n",text);

    //get string length
    length=stringLength(text);

    printf("%d", length/2);


    for(i=0;i<=(length/2); i++)
    {
        //swap elements
        tempChar=text[i];
        text[i]=text[length-i-1];
        text[length-i-1]=tempChar;
    }

    printf("Reverse string is: %s\n",text);
    return 0;
}
