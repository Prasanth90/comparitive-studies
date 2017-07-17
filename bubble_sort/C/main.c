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

	int array[n];
	for (int i = 0 ; i != n ; i++) {
	    printf("Enter number %d: ", i+1);
	    scanf("%d", &array[i]);
	}

	
	int temp = 0;

	for (int i = 0 ; i <  n - 1 ; i++)
	{
		for (int j = 0 ; j < n - i - 1; j++)
		{
			if (array[j] > array[j+1]) /* For decreasing order use < */
			{
				temp      = array[j];
				array[j]   = array[j+1];
				array[j+1] = temp;
			}
		}
	}

	printf("The Sorted elements are: ");
	for(int i = 0 ; i< n; i++)
	{
		printf("%d ", array[i]);
	}

    return 0;
}

