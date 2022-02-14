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


    // trying the comparison function
    if (myNumber > number){
        printf(" Oh is greater");
    }else if (myNumber < number){
        printf("Common this is lesser \n");
    }else{
        printf("Fuck off");
    }

    // trying the switch case instead of writing more of if.. else conditions
    int day;
    // requesting for an input
    scanf("%d", &day);

    switch (day){
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday\n");
            break;
    }



    // while loop
    int cast = 1;
    while (cast < 5){
        printf("%d\n", cast);
        ++cast;
    }

    //  Do while loop
    int i = 0;

    do {
    printf("%d\n", i);
    i++;
    }
    while (i < 5);



    return 0;
}


