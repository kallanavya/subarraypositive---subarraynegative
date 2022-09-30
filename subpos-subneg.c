#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    int a[100], n, i, j, subpos = 0, subneg = 0, result;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        bool singocc = true;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                singocc = false;
                a[i] = a[j] = 0;
                break;
            }
        }
        if (singocc)
        {
            if (a[i] > 0)
            {
                subpos += a[i];
            }
            else
                subneg += a[i];
        }
    }
    result = subpos - subneg;
    printf("%d", result);
}