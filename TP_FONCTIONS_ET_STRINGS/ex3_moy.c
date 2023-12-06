#include <stdio.h>
// variable global
int moy;

/**
* moyenne - function calculent la moyenne de tableau
* @T : tableau
* @n : size of tableau
* Return : nothing
*/
void moyenne(int T[], int n)
{
    int i, s = 0;

    for (i = 0; i < n; i++)
    {
       s += T[i];
    }
    moy = s / n;
}


int main()
{
    int i, T[100], size;

    do
    {
        printf("donner moi size of table: ");
        scanf("%d", &size);

    }while(size > 100 || size < 0);

    for (i = 0; i < size; i++)
    {
        printf("donner moi T[%d] = ", i+1);
        scanf("%d", &T[i]);
    }

    moyenne(T, size);
    printf("la moyenne de ces nombres est: %d", moy);

    return (0);
}
