#include <stdio.h>

int main()
{
    int n, i, j, space;

    scanf("%d", &n);

    for(i = n; i >= 1; i--)
    {
        for(space = 0; space < n - i; space++)
            printf(" ");

        for(j = 1; j <= 2 * i - 1; j++)
        {
            if(i == n || j == 1 || j == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
