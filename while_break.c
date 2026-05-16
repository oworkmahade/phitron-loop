#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        if (i == 11)
        {
            break;
        }
        printf("%d\n", i);
        i = i + 1;
    }
    return 0;
}