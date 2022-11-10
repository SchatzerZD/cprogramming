#include <stdio.h>
#include "test.h"

int main() {


    int currentYear = 2022;
    int birthYear = 2001;

    int age = currentYear - birthYear;
    char name[] = "Daniel";

    printf("%s is %d years old\n",name,age);

    name[1] = 'o';
    printf("%s is %d years old\n",name,age);

    //MYNAME and AGE is defined in test.h
    printf("%s is %d years old\n\n\n",MYNAME,AGE);



    printf("Write your name:\n");
    char inputName[20];
    scanf("%s", inputName);

    printf("Write your age:\n");
    int inputAge;
    scanf("%d",&inputAge);

    printf("Your name is %s and your age is %d",inputName,inputAge);




    return 0;
}
