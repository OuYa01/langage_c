#include <stdio.h>

typedef enum{licence = 1, master, doctorat} niveau;

typedef enum {masculin = 1, feminin} genre;

typedef enum {Employe = 1, non_employe} employe;


typedef struct {
    char nom_societe[20];
    int ID;
    char vill[20];
} EmployeInfo;

typedef union
{
    EmployeInfo emp;
}em;

typedef struct
{
        char name[20];
        int age;
        niveau N;
        genre G;
        employe EM;
        em e;
}etudiant;

void printEtudiant(etudiant* E)
{
        printf("name : %s\n", E->name);
        printf("age: %d\n", E->age);

        printf("genre : ");

        if (E->G == masculin)
                printf("masculin\n");
        else
                printf("feminin\n");

        printf("niveau : ");

        switch(E->N)
        {
                case licence: printf("licence\n"); break;
                case master: printf("master\n"); break;
                case doctorat: printf("doctorat\n"); break;
        }

        if (E->EM == Employe)
        {
                printf("Company Name: %s\n", E->e.emp.nom_societe);
                printf("Employee ID: %d\n", E->e.emp.ID);
                printf("City: %s\n", E->e.emp.vill);
        }

}
int main(void)
{
        etudiant E1;
        printf("what's your name?\n");
        scanf("%s", E1.name);
        printf("How old are you?\n");
        scanf("%d", &E1.age);
        printf("your genre: 1-masculin, 2-feminin\n");
        scanf("%d", &E1.G);
        printf("what is your nv: 1-licence, 2-Master, 3-Doctorat\n");
        scanf("%d", &E1.N);
        printf("1-employe, 2-non employe\n");
        scanf("%d", &E1.EM);

        if (E1.EM == Employe)
        {
                printf("Company Name: ");
                scanf("%s", E1.e.emp.nom_societe);

                printf("Employee ID: ");
                scanf("%d", &E1.e.emp.ID);

                printf("City: ");
                scanf("%s", E1.e.emp.vill);
        }

        printEtudiant(&E1);
}
