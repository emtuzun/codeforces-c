#include <stdio.h>

int main()
{
    int n;
    char s1[] = "I hate it";
    char s2[] = "I hate that";
    char s3[] = "I love it";
    char s4[] = "I love that";
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (i%2 == 0 && i == n-1)
        {
            printf("%s ", s1);
        }
        else if (i%2 == 0 && i != n-1)
        {
            printf("%s ", s2);
        }
        else if (i%2 != 0 && i == n-1)
        {
            printf("%s ", s3);
        }
        else
        {
            printf("%s ", s4);
        }
    }
    printf("\n");
    return 0;
}