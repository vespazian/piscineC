#include <unistd.h>

void    me_putchar(char c)
{
    write(1, &c, 1);
}
