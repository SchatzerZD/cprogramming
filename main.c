#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {


    int currentYear = 2022;
    int birthYear = 2001;

    int age = currentYear - birthYear;
    char name[] = "Daniel";

    printf("%s is %d years old\n",name,age);

    name[1] = 'o';
    printf("%s is %d years old\n",name,age);

    //printf("yo" + " hi") does not work



    return 0;
}
