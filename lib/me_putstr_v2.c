int me_putstr(char  *str)
{
    char c;
    unsigned i;
    i = 0;
    write(1, str, 1);
    while (*str++)
    {
        if(*str == '\0')
            write(1, "\n", 1);
        write(1, str, 1);
        //echivalent cu write(1, &(*str), 1);        
        i++;
        c = '0' + i;
        write (1, &c, 1);
    }
    if(*str == '\0')
        write(1, "-", 1);
    return (0);
}
