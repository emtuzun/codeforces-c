#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    char t[100];
    scanf("%s", s);
    scanf("%s", t);
    int len_str = 0;
    char result[] = "YES";
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != t[strlen(s)-1-i])
        {
            strcpy(result, "NO");
        }
        
    }
    printf("%s\n", result);
    return 0;
}