#include <stdio.h>
#include <stdbool.h>

void howToDisplayDataTypes() {
     int x , y , z; // unintialized yet


    printf("%d",x);
    printf("\n");
    printf("%d" , y);
    printf("\n");
    printf("%d",z);
    printf("\n");
    char name [] = "Ammar\n";
    printf("%s",name);

    char character = 'S';
    printf("%c" ,character);

    printf("\n");

    float gpa = 3.14234234234;
    printf("%0.15f" , gpa);

    printf("\n");

    double d = 2.3232323465457653546;
    printf("%0.15lf lf with certain number of digits after is more percise than float\n" , d);

    bool s = true;
    printf("%d\n",s);

    unsigned short a = 432;
    printf("%d\n",a);

    long long int a1 = 1234523663452345;
    printf("%lld\n",a1);

    printf("%lld bytes\n" , sizeof(long long int));

}

void howToFormatSpecifier() {
    // format specifier % = defines and formats a type of data to be displayed
    // %c = character
    // %s = string (array of chars)
    // %f = float


    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%.5f\n" , item1);
    printf("Item 2: $%8.2f\n" , item2);
    printf("Item 1: $%-5.2f\n" , item3);
}


int main(void) {

    //howToDisplayDataTypes();

    howToFormatSpecifier();

    return 0;
}
