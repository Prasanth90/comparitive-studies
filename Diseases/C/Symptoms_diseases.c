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
	int fact_count = 60;
	int symptom_count = 0;
    char *user_input[100];

	update_fact(0, "Fever", "Influenza");
	update_fact(1, "Chills", "Influenza");
	update_fact(2, "Cough", "Influenza");
	update_fact(3, "Sore throat", "Influenza");
	update_fact(4, "Runny Nose", "Influenza");
	update_fact(5, "Stuffy", "Influenza");
	update_fact(6, "Muscle Aches", "Influenza");
	update_fact(7, "Body Aches", "Influenza");
	update_fact(8, "Headaches", "Influenza");
	update_fact(9, "Fatigue", "Influenza");
	update_fact(10, "Tiredness", "Influenza");
	update_fact(11, "Vomiting", "Influenza");
	update_fact(12, "Diarrhea", "Influenza");
	update_fact(13, "Fever", "AIDS");
	update_fact(14, "Chills", "AIDS");
	update_fact(15, "Rash", "AIDS");
	update_fact(16, "Night sweats", "AIDS");
	update_fact(17, "Muscle aches", "AIDS");
	update_fact(18, "Sore throat", "AIDS");
	update_fact(19, "Swollen lymph nodes", "AIDS");
	update_fact(20, "Mouth ulcers", "AIDS");
	update_fact(21, "Fatigue", "AIDS");
	update_fact(22, "Rapid weight loss", "AIDS");
	update_fact(23, "Neurologic disorders", "AIDS");
	update_fact(24, "Depression", "AIDS");
	update_fact(25, "Memory loss", "AIDS");
	update_fact(26, "Pneumonia", "AIDS");
	update_fact(27, "Sores of the mouth", "AIDS");
	update_fact(28, "Sores of the anus", "AIDS");
	update_fact(29, "Sores of the genitals", "AIDS");
	update_fact(30, "Nausea", "Hepatitis C");
	update_fact(31, "Vomiting", "Hepatitis C");
	update_fact(32, "Stomach Pain", "Hepatitis C");
	update_fact(33, "Joint Pain", "Hepatitis C");
	update_fact(34, "Muscle Pain", "Hepatitis C");
	update_fact(35, "Yellow Skin", "Hepatitis C");
	update_fact(36, "Yellow Eyes", "Hepatitis C");
	update_fact(37, "Urine abnormalities", "Hepatitis C");
	update_fact(38, "abnormal bowel movements", "Hepatitis C");
	update_fact(39, "Fever", "Hepatitis C");
	update_fact(40, "Tiredness", "Hepatitis C");
	update_fact(41, "Poor appetite", "Hepatitis C");
	update_fact(42, "Cramping and spotting", "Pregnancy");
	update_fact(43, "Missed period", "Pregnancy");
	update_fact(44, "Fatigue", "Pregnancy");
	update_fact(45, "Nausea", "Pregnancy");
	update_fact(46, "Tingling breasts", "Pregnancy");
	update_fact(47, "Aching breasts", "Pregnancy");
	update_fact(48, "Frequent urination", "Pregnancy");
	update_fact(49, "Bloating", "Pregnancy");
	update_fact(50, "Motion sickness", "Pregnancy");
	update_fact(51, "Mood swings", "Pregnancy");
	update_fact(52, "Temperature changes", "Pregnancy");
	update_fact(53, "High blood pressure", "Pregnancy");
	update_fact(54, "Heartburn", "Pregnancy");
	update_fact(55, "Faster heartbeat", "Pregnancy");
	update_fact(56, "Breast and nipple changes", "Pregnancy");
	update_fact(57, "Acne", "Pregnancy");
	update_fact(58, "Weight Gain", "Pregnancy");
	update_fact(59, "Pregnancy glow", "Pregnancy");


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
