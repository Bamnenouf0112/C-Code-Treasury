// C Program to illustrate the increment of both type.

// i.e Increment 
// 1. Pre-Increment
// 2. Post-Increment

// and Decrement
// 1. Pre-Decrement
// 2. Post-Decrement

#include <stdio.h>

int main()
{
	int a = 5;
	int b = 5;

	// PREFIX INCREMENT
	int prefixincrement = ++a;
	printf("Prefix Increment: %d\n", prefixincrement);

	// POSTFIX INCREMENT
	int postfixincrement = b++;
	printf("Postfix Increment: %d\n", postfixincrement);

    // PREFIX DECREMENT
    int prefixdecrement = --a;
    printf("Prefix Decrement: %d\n", prefixdecrement);
 
    // POSTFIX DECREMENT
    int postfixdecrement = b--;
    printf("Postfix Decrement: %d\n", postfixdecrement);
}


