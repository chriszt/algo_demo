#include <stdio.h>

#include <algo.h>

int main(void)
{
    long x = 5, y = 2, ret = 0;

    ret = add(x, y);
    printf("%ld + %ld = %ld\n", x, y, ret);

    ret = sub(x, y);
    printf("%ld + %ld = %ld\n", x, y, ret);

    return 0;
}