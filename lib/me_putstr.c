int me_putstr(char  *str)
{
    char c;
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    return (0);
}
