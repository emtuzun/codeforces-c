#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int magnets[n];
    int result = 0;
    int old_magnet = 5;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &magnets[i]);
        if (old_magnet != magnets[i])
        {
            result++;
            old_magnet = magnets[i];
        }
    }
    printf("%d\n", result);
    return 0;
}