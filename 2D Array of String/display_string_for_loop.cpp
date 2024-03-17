#include<stdio.h>
#include<string.h>
int main()

{
    char lang[5][10] = {"Java", "Python", "C++", "HTML", "SQL"};


    printf("Language are:\n");

    for(int i=0; i<5; i++)
    {

        printf("%s ", lang[i]);

    }

}
