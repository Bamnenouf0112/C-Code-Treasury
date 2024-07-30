// C program to illustrate the assignment operators
#include <stdio.h>

int main()
{
    int a = 25, b = 5;

    // using operators and printing results
    printf("a = b: %d\n", a = b); // assignment
    printf("a += b: %d\n", a += b); // Plus and assign
    printf("a -= b: %d\n", a -= b); // Minus and assign
    printf("a *= b: %d\n", a *= b); // Multiply and assign
    printf("a /= b: %d\n", a /= b); // Divide and assign
    printf("a %%= b: %d\n", a %= b); // Modulo and assign
    printf("a &= b: %d\n", a &= b); // Bitwise AND and assign
    printf("a |= b: %d\n", a |= b); // Bitwise OR and assign
    printf("a >>= b: %d\n", a >>= b); // Bitwise right shift and assign
    printf("a <<= b: %d\n", a <<= b); // Bitwise left shift and assign

    return 0;
}
