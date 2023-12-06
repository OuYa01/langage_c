#include <stdio.h>
#include <string.h>

/**
* main - Entry point
*
* description : ce programme analyse une chaîne de caractères
*               et compte le nombre de voyelles
*
* Return : 0 if succ
*/

int main()
{
    char ch[100];
    int size, count, i;

    do
    {
        printf("donner moi a text (max 100 caracter): ");
        gets(ch);

    }while(strlen(ch) > 100);

    size = strlen(ch);
    count = 0;

    for (i = 0; i < size; i++)
    {
        if (ch[i] == 'a' || ch[i] == 'e'|| ch[i] == 'i'
            || ch[i] == 'o'|| ch [i] == 'u')
                count ++;
    }

    printf("le nombre de voyelles est: %d", count);
}
