#include <stdio.h>

int main(void)
{
    int m = 3;
    int n = 10;

    int v[3][10] = {{59, 26, 41, 100, 89, 70, 54, 22, 16, 189},
                    {70, 12, 9, 150, 300, 59, 26, 41, 100, 89},
                    {59, 26, 41, 100, 89, 59, 26, 41, 100, 89}};

    int i, j, x, y, ci, repL, repC, rLinha, rCol, pag, total;

    rLinha = 3 % 50;
    rCol = 10 % 5;

    if (rLinha == 0)
    {
        repL = 3 / 50;
    }
    else
    {
        repL = m;
    }

    i = 0;
    j = 1;
    ci = 0;
    pag = 0;

    if (repL > 1)
    {
        total = m;
        repL = 1;
    }
    else
    {
        total = 1;
    }

    while (pag < total)
    {

        while (i < repL)
        {
            for (x = 1 * i; x <= (1 * j) - 1; x++)
            {
                for (y = 5 * ci; y <= (5 * j) - 1; y++)
                {
                    printf("\tcol%d ", y);

                    if (y == ((5 * j) - 1))
                    {
                        printf("\n");
                    }
                }
                printf("row%d ", pag);
                for (y = 5 * ci; y <= (5 * j) - 1; y++)
                {
                    printf("\t%d ", v[pag][y]);

                    if (y == (n - 1))
                    {
                        printf("\n");
                    }
                }
                if (y < 10)
                {
                    x = 0;
                    ci++;
                    printf("\n");
                }
                else
                {
                    i++;
                    ci = 0;
                    j = 0;
                }
            }

            j++;
        }
        i = 0;
        j = 1;
        pag++;
        printf("\n\n");
    }
}