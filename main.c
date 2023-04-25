#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int len;
    int len2;
/**    unsigned int ui;
*    void *addr;
*/
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
/*    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
*/    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%u]\n", -76240);
    printf("Negative:[%u]\n", -76240);
    _printf("Unsigned octal:[%o]\n", 5000000000);
    printf("Unsigned octal:[%o]\n", 5000000000);
    _printf("Unsigned hexadecimal:[%x %X]\n", 55770);
    printf("Unsigned hexadecimal:[%x %X]\n", 55770);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string");
    printf("String:[%s]\n", "I am a string");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    return(0);
}
