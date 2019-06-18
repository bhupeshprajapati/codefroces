#include <stdio.h>
int main()
{
    int n;
    char str[101];
    scanf("%d", &n);
    while (n--)
    {
        int i = 0;
        scanf("%s", str);
        while (str[i] != '\0')
        {
            i++;
        }
        if (i < 11)
            printf("%s\n", str);
        else
            printf("%c%d%c\n", str[0], i - 2, str[i - 1]);
    }
}