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
            // continue go throw directly to the next iteration
            // of the loop without executing the remaining code in the loop body for the current iteration.
            // if we put increment/decrement under continue then
            // it will cause infinite loop because the value of i
            // \will never change and it will always be 11,
            // so we need to put increment/decrement before

            i = i + 1;
            continue;
        }
        printf("%d\n", i);
        i = i + 1;
    }
    return 0;
}
