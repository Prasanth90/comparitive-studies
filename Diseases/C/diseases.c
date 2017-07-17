/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include <stdio.h>
#include <string.h>

void update_fact(int,char[], char[]);
 
struct diseasefact {
   char symptom[100];
   char disease[100];
};

struct diseasefact diseases[100];

/****************************************************************************
 *                                                                          *
 * Function: main                                                           *
 *                                                                          *
 * Purpose : Main entry point.                                              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

int main(int argc, char *argv[])
{
    
	char predicted_diseases[5][100];
	int predicted_diseases_count = 0;
	char symptom[100];
	int fact_count = 3;
	int symptom_count = 0;
    char *user_input[100];

	update_fact(0, "fever", "Influenza");
	update_fact(1, "cough", "jaundice");
	update_fact(2, "cold", "jaundice");


	printf("Enter the symptoms separated by comma (,)\n");
	scanf("%s", symptom);
	char *p = strtok (symptom, ",");

	while (p != NULL)
    {
        user_input[symptom_count++] = p;
        p = strtok (NULL, ",");
    }

	for(int j=0; j<symptom_count; j++)
	{
		for(int k=0; k< fact_count; k++)
		{
			if(strcmp(user_input[j], diseases[k].symptom) == 0)
			{
				strcpy(predicted_diseases[predicted_diseases_count],diseases[k].disease);
				predicted_diseases_count++;
			}
		}
	}

	if(predicted_diseases_count == 0)
	{
		printf("\nHey Sorry!! We are not able to diagnose you based on your symptoms\n");
	}
	else
	{
		int i, j, n, unique[predicted_diseases_count];
		n = 0;
		for (i = 0; i < predicted_diseases_count; ++i)
		{
		    for (j = 0; j < n; ++j)
		    {
		        if (!strcmp(predicted_diseases[i], predicted_diseases[unique[j]]))
		           break;
		    }

		    if (j == n)
		        unique[n++] = i;
		}

		printf("\nHey , Our systems found the following disease(s) which you would be affected with\n\n");

		for(int i=0; i<n ; i++)
		{
			printf("%d) %s\n",i+1,predicted_diseases[unique[i]]);
		}
	}
}

void update_fact(int i, char symptom[100], char disease[100])
{
	strcpy(diseases[i].symptom , symptom);
	strcpy(diseases[i].disease , disease);
}