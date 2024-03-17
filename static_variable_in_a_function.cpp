#include<stdio.h>


   int function1(){
    int x=10;
    static int y=10;
    x=x+1;
    y=y+1;
    printf("%d, %d", x, y);
    printf("\n");
   }

 int main()
 {
     function1();
      function1();
      function1();
      function1();
 }
