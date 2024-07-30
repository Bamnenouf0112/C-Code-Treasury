// C Program to demonstrate use of double data type.

// Range: 1.7E-308 to 1.7E+308
// Size: 8 bytes
// Format Specifier: %lf

#include <stdio.h>
 
int main()
{
    double a = 123123123.00;
    double b = 12.293123;
    double c = 2312312312.123123;
 
    printf("%lf\n", a);
 
    printf("%lf\n", b);
 
    printf("%lf", c);
 
    return 0;
}