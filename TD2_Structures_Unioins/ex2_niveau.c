#include <stdio.h>

typedef enum{licence = 1, master, doctorat} niveau;

typedef enum {masculin = 1, feminin} genre;

typedef struct
{
	char name[20];
	int age;
	niveau N;
	genre G;

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

	printEtudiant(&E1);
}
