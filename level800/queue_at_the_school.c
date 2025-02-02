#include <stdio.h>

int main()
{
    int n, t, b;
    scanf("%d %d\n", &n, &t);
    char s[50];
    scanf("%s", s);
    for (int j = 0; j < t; j++)
    {
        b = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                b = 1;
            }
            else
            {
                if (b == 1)
                {
                    s[i-1] = 'G';
                    s[i] = 'B';
                }
                b = 0;
            }
        }
    }
    printf("%s\n", s);
    return 0;
}