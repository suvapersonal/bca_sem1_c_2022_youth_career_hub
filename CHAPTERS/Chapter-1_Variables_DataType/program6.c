//Swaps two numbers without using third variable
#include <stdio.h>
int main ()
{
    //code to swap two numbers
    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: %d %d", a, b);
    return 0;
}