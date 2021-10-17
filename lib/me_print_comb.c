#include <unistd.h>

void putnbr_3(int x, int y, int z)
{
    char c;

    c = '0' + x;
    write(1, &(c), 1);
    c = '0' + y;
    write(1, &(c), 1);
    c = '0' + z;
    write(1, &(c), 1);
    if (x != 7 || y != 8 || z != 9)
        write(1, ", ", 2);
}

void ft_print_comb(void)
{
    int i;
    int j;
    int k;

    i = 0;
    j = 1;
    k = 2;
    while (i <= 7)
    {
        while (j <= 8)
        {
            while (k <= 9)
            {
                if(i < j && j < k)
                    putnbr_3(i, j, k);
                k++;
            }
            j++;
            k = 0; //j + 1;
            write(1, "\n", 1); //debug only

        }
        i++;
        j = 0; 
        write(1, "\n", 1); //debug only
    }
    //012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$
}

// void ft_print_comb(void)
// {
//     int i;
//     int j;
//     int k;

//     i = 0;
//     j = 1;
//     k = 2;
//     while (i <= 3)
//     {
//         while (j <= 4)
//         {
//             while (k <= 5)
//             {
//                 putnbr_3(i, j, k);
//                 k++;
//                 if (j == 2)
//                     write(1, "evrica !!! i = 2\n", 16);
//             }
//             j++;
//             k = j + 1;
//             write(1, "\n", 1); //debug only
//         }
//         i++;
//         if (j == 2)
//             write(1, "evrica !!! i = 2\n", 16);
//         j = i + 1;
//         write(1, "\n", 1); //debug only
//     }
//     //012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$
// }