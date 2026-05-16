#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i == 11)
        {
            continue;
        }
        printf("%d ", i);
        printf("times\n");
    }

    return 0;
}

// nb: break statement stops the loop and continue statement
// skips the current iteration of the loop
// and continues with the next iteration.