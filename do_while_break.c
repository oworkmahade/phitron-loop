#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 1;
    do
    {
        printf("%d\n", i);
        i = i + 1;

        if (i == 5)
        {
            break;
        }
    } while (i <= n);

    return 0;
}