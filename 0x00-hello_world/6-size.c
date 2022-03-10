#include <stdio.h>

int main()
{
    char c_char;
    int c_int;
    long c_long;
    long long c_long_long;
    float c_float;

    printf("Size of a char : %lu byte(s)\n", sizeof(c_char));
    printf("Size of a int : %lu byte(s)\n", sizeof(c_int));
    printf("Size of a long int : %lu byte(s)\n", sizeof(c_long));
    printf("Size of a long long int : %lu byte(s)\n", sizeof(c_long_long));
    printf("Size of a float : %lu byte(s)\n", sizeof(c_float));
    return 0;
}