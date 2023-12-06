#include <stdio.h>
#include <string.h>

/**
* main - entry point
*
* description : programme qui lit deux chaînes de caractères
*               str1 et str2 et vérifie si str1 == str2 or not
*               et qui copie str1 et str2 dans une str3

*
* Return : 0 if succ
*/
int main()
{
    char str1[100], str2[100], str3[100], stra[100], strb[100];
    int size, size1, c, i, count, count1;

    do
    {
        printf("donner moi string1 (max 100 caracter): ");
        gets(str1);
        printf("donner moi string2 (max 100 caracter): ");
        gets(str2);

    }while(strlen(str1) > 100 || strlen(str2) > 100);

    printf("str 1: %s\n", str1);
    printf("str2: %s \n", str2);

    if(strlen(str1) % 2 == 0 && strlen(str2) % 2 == 0)
    {
        size = strlen(str1) / 2;
        count = 0;
        for (i = 0; i < size; i++)
        {
            if (str1[i]==str1[i+size])
            {
                stra[i] = str1[i];
                count ++;
            }
        }
        stra[i] = '\0';

        size1 = strlen(str2) / 2;
        count1 = 0;
        for (i = 0; i < size1; i++)
        {
                if (str2[i]==str2[i+size1])
                {
                    strb[i] = str2[i];
                    count1 ++;
                }
        }
        strb[i] = '\0';
    }

    if (count == size && count1 == size1)
    {
        strcpy(str3, stra);
        strcat(str3, strb);
        printf("str3: %s", str3);
    }
    else
    {
        printf("les deux chaŒnes sont pas identiques");
    }

    return (0);
}
