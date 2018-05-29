#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	int number;
	char name[50]; //dynamic memory allocation would be more efficient, right?
}employee;

//employee e[10];

int main()
{
	employee e[10];
	int i, n;
	printf("Enter the number of employees: \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
    	printf("\nEnter employee number: ");
    	scanf("%d", &(e[i].number));
    	printf("\nEnter employee name: ");
    	scanf("%s", e[i].name);
    }
	
	printf("\nEmpNo. Name");
	for (i = 0; i < n; i++)
	{
		printf("\n%d \t %s\n", e[i].number, e[i].name);
	}
	// getch();
	return 0;
}



