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

}
int main(void) {

    howToDisplayDataTypes();


    return 0;
}
