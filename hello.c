#include <stdio.h>

int main(void)
{
    int x = 3, y = 0;
    // If x > 10, add 17 to y. Otherwise add 37 to y.
    y += x > 10? 17: 37;

    float f = 3.14;
    char *s = "Hello, world!";  // char * ("char pointer") is the string type

    printf("%s  i = %d and f = %f!\n", s, y, f);

    int i,j;
    for (i = 0, j = 10; i < 100; i++, j++) {
        printf("%d, %d\n", i, j);
    }
}
