#include <stdio.h>
#include <stdlib.h>
void main()
{
    int f[50], i, st, len, j, c, k, p, a;
    for (i = 0; i < 50; i++)
        f[i] = 0;
    printf("enter how many blocks already allocated:");
    scanf("%d", &p);
    printf("enter blocks already allocated:");
    for (i = 0; i < p; i++)
    {
        scanf("%d", &a);
        f[a] = 1;
    }
x:
    printf("enter index starting block and length:");
    scanf("%d%d", &st, &len);
    k = len;
    if (f[st] == 0)
    {
        for (j = st; j < (st + k); j++)
        {
            if (f[j] == 0)
            {
                f[j] = 1;
                printf("%d--->%d\n", j, f[j]);
            }
            else
            {
                printf("%d block is already alloated \n", j);
                k++;
            }
        }
    }
    else
        printf("%d starting block is already allocated \n", st);
    printf("do you want to enter more files (YES-1 / NO-0)");
    scanf("%d", &c);
    if (c == 1)
        goto x;
    else
        exit(0);
}