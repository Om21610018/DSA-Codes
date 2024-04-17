// #include <stdio.h>

// // typedef struct temp
// // {
// //     char str[30];
// // } tem;

// // int main()
// // {
// //     tem t1 = {"wow"};
// //     printf("%s", t1.str);
// // }

// typedef enum Level
// {
//     MYVAL = 50,
//     MEDIUM = 100,
//     HIGH
// } lvl;

// int main()
// {
//     // Create an enum variable and assign a value to it
//     lvl myVar = HIGH;

//     // Print the enum variable
//     printf("%d", myVar);

//     return 0;
// }

// C Program to demonstrate how to use union
#include <stdio.h>

// union template or declaration
union un
{
    int member1;
    char member2;
    float member3;
};

// driver code
int main()
{

    // defining a union variable
    union un var1;

    // initializing the union member
    var1.member1 = 15;
    var1.member3 = 4.333;

    printf("The value stored in member1 = %d",
           var1.member1);
    printf("The value stored in member2 = %c",
           var1.member3);

    return 0;
}
