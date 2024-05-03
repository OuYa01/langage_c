#include <stdio.h>

/**
 * struct etudiant - struct for a student 
 * @name: name of that student
 * @age: age of the student
*/
typedef struct
{
    char name[20];
    int age;
}etudiant;


/**
 * printEtudiant - function that prints information of student
*/
void printEtudiant(etudiant* E)
{
    printf("name: %s\n", E->name);
    printf("age : %d\n", E->age);
}

/**
 * main - Entry point
 * Return
*/
int main(void)
{
    etudiant E1;

    printf("what's your name?\n");
    scanf(" %s", E1.name);
    printf("how old are u?\n");
    scanf("%d", &E1.age);
    printEtudiant(&E1);

    return (0);
}

