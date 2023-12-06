#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
    int size, c, i;

    do
    {
        printf("donner moi a text (max 100 caracter): ");
        gets(ch);

    }while(strlen(ch) > 100);

    printf("donner moi an caracter: ");
    scanf(" %c", &c);

    for (i = 0; i < strlen(ch); i++)
    {
        if (ch[i] != c)
            printf("%c", ch[i]);
    }

    return (0);
}
