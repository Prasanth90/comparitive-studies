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
	int n;
	printf("Hello, world!\n");
	printf("How many numbers would you like to enter?\n");
	scanf("%d", &n);

	int a[n];
	for (int i = 0 ; i != n ; i++) {
	    printf("Enter number %d: ", i+1);
	    scanf("%d", &a[i]);
	}
	
	int temp = 0;

	for(int i= 0 ; i != n-1 ; i++) 
	{
		for(int j = i+1 ; j!= n; j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("The Sorted elements are: ");
	for(int i = 0 ; i!= n; i++)
	{
		printf("%d ", a[i]);
	}

    return 0;
}

