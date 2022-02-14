#include <stdio.h>


// int main(){
//     printf("I wrote this code my self \n");
//     printf("I just want to see if it will go to the next line");

//     return 0;
// }


// int myNumber;

// int main(){
//     myNumber = 22;
//     printf("%d", myNumber);
    
//     return 0;
// }


int main(){
    int myNumber = 20;
    float number = 22.2;
    char letter = 'A';

    // printing signed integer, float and character with their respective format specifiers.
    printf("%d\n", myNumber);
    printf("%f\n", number);
    printf("%c\n", letter);

    printf("%f\n", myNumber + number);

    // printing string
    char welcome[] = "Welcome to C language";
    printf("%s\n", welcome );

    // using comparison operator
    printf("%d\n", myNumber < number);

    return 0;
}


