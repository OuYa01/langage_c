#include <stdio.h>

/**
* calculatrice - function that make an calculation
* @a : number 1
* @b : number 2
* @op : + or - or / or x
*
* Return: the calculation
*/
int calculatrice(int a, int b, char op)
{
    switch(op)
    {
        case '+': return (a + b); break;
        case '-': return (a - b); break;
        case '/': return (a / b); break;
        case 'x': return (a * b); break;
    }
}

int main()
{
    int a, b;
    char op;
    do
    {
        printf("donner moi Calcul: ");
        scanf("%d %c %d", &a, &op, &b);

    }while(op != '+' && op != '-' && op != 'x' && op != '/');

    printf("%d %c %d = %d", a, op, b, calculatrice(a, b, op));
    return (0);
}
