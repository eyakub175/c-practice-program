#include<stdio.h>

int main()
{
    char name[10][20];

     int i, n;
    printf("Enter a number:\n");
     scanf("%d", &n);

     for(int i=0; i<n; i++)
     {

         scanf("%s", name[i]);

     }

     for(int i=0; i<n; i++)
     {


         printf("%s \n", name[i]);
     }


    return 0;
}
