#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>


void howToCtypehLibrary();

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


void howToConst() {
    // constant = fixed value that cannot be altererd by the program during its execution
    const float PI = 3.141592653589793;
    printf("%d\n", PI);
}

void howToGetUserInput() {


    int age;
    char name[100];

    // Reading name
    printf("What's your name:");
    fgets(name,100,stdin);
    name[strcspn(name, "\n")] = 0;

    // Reading age
    printf("How old are you:");
    scanf("%d", &age);
    getchar(); // To consume the newline character after the age input

     // Remove the trailing newline character

    // Outputting the results
    printf("You are %d years old\n", age);
    printf("Your name is %s\n", name);


    // scanf can't deal with spaces otherwise use fgets
}

int main(void) {

    //howToDisplayDataTypes();

    //howToFormatSpecifier();

    // howToConst();

    //howToGetUserInput();

    howToCtypehLibrary();

    return 0;
}

void howToCtypehLibrary() {
    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C): ");
    scanf(" %c", &unit); // Added a space before %c to handle newline/whitespace from previous input

    unit = toupper(unit); // Convert to uppercase to handle lowercase input

    if (unit == 'C') {
        printf("\nThe temperature is currently in Celsius.");
        printf("\nEnter the temperature in Celsius: ");
        scanf("%f", &temp); // Prompt user before reading input
        temp = (temp * 9 / 5) + 32; // Convert Celsius to Fahrenheit
        printf("\nThe temperature in Fahrenheit is: %.2f°F\n", temp);
    }
    else if (unit == 'F') {
        printf("\nThe temperature is currently in Fahrenheit.");
        printf("\nEnter the temperature in Fahrenheit: ");
        scanf("%f", &temp); // Prompt user before reading input
        temp = ((temp - 32) * 5) / 9; // Convert Fahrenheit to Celsius
        printf("\nThe temperature in Celsius is: %.2f C\n", temp);
    }
    else {
        printf("\n'%c' is not a valid unit.\n", unit); // Handle invalid input
    }
}