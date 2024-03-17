#include<stdio.h>
int main()
{
//p1:
    char language[5][10]={"Java", "Python", "C++", "HTML", "SQL",};
//p2:

    char language1[5][10]={
                         {'j', 'a', 'v', 'a', '\0' },

                         {'P','y','t','h','o','n','\0'},

                         {'C','+','+','\0'},

                         {'H','T','M','L','\0'},

                         {'S','Q','L','\0'}

                         };


//p3:
language[0] => "Java";
language[1] => "Python";
language[2] => "C++";
language[3] => "HTML";
language[4] => "SQL";

//p4:

// it is valid
char language[ ][10] = {"Java", "Python", "C++", "HTML", "SQL"};

// invalid
char language[ ][ ] = {"Java", "Python", "C++", "HTML", "SQL"};


// invalid
char language[5][ ] = {"Java", "Python", "C++", "HTML", "SQL"};

//Note2:- Once we initialize the array of String then we can’t directly assign a new String.

char language[5][10] = {"Java", "Python", "C++", "HTML", "SQL"};

// now, we can't directly assign a new String
language[0] = "Kotlin"; // invalid

// we must copy the String
strcpy(language[0], "Kotlin"); // valid
// Or,
scanf(language[0], "Kotlin"); // valid


}
