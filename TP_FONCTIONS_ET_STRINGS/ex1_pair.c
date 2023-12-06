#include <stdio.h>

int EstpairF(int n)
{
    return(n % 2);
}

void EstpairP(int n)
{
    if (n % 2 == 0)
        printf("%d est pair\n", n);

    else
        printf("%d est non pair\n", n);
}

int main()
{
    int a;

    printf("donner moi an nomber: ");
    scanf("%d", &a);
    EstpairP(a);
    printf("le return est %d", EstpairF(a));
}
