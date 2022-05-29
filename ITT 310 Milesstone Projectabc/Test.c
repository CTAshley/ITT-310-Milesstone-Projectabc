#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int main()
{

	// This is used to welcome the user when they log in
	printf("Christopher Ashley\t");
	printf("Milestone Project Release\t");
	printf("Professor Jeremy Wright\t");
	printf("Welcome to Lopes School District\t");
	{ printf("This number will be assigned as the student lottery number\t");

	int lower = 1, upper = 9, count = 4;

	srand((unsigned int)time(0));

	for (int i = 0; i < count; i++) {
		int num = (rand() % (upper - lower + 1)) + lower;
		printf("%d ", num);
	}
	}
	char studentname[500];
	int studentage;
	int studentgradelevel;


	// Students information will be entered
	printf("What is the student name?\t");
	scanf_s("%s", &studentname, 500);
	printf("How old is the student?\t");
	scanf_s("%d", &studentage);
	printf("Assigned students grade level?\t");
	scanf_s("%d", &studentgradelevel);
	printf("The student is %d years old %d is the student grade level and student name is %s  \n\n\n", studentage, studentgradelevel, studentname);
	system("pause");





	return 0;
}


