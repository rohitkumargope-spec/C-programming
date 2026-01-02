#include <stdio.h>

int main() {
    int age = 20;
    float height = 5.8;
    double salary = 25000.75;
    char grade = 'A';

    printf("Integer value (age): %d\n", age);
    printf("Float value (height): %.2f\n", height);
    printf("Double value (salary): %.2lf\n", salary);
    printf("Character value (grade): %c\n", grade);

    return 0;
}
