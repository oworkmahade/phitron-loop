#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 1;
    do
    {

        if (i == 5)
        {
            i = i + 1;
            continue;
        }
        printf("%d\n", i);
        i = i + 1;

    } while (i <= n);

    return 0;
}