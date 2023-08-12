// Program to create upper triangular matrix and lower triangular matrix
#include<stdio.h>

void input_matrix(int a[][50], int s)
{
	for(int i=0; i< s; i++)
	{
		for(int j=0; j<s; j++)
		{
			printf("Enter element a%d %d \n", i, j);
			scanf("%d", &a[i][j]);
		}
	}	
	
}

void print_matrix(int a[][50], int s)
{
	for(int i=0; i< s; i++)
	{
		for(int j=0; j<s; j++)
		{
			printf("%d\t", a[i][j]);
		}
		
		printf("\n");
	}	
	
}

void create_upper_matrix(int a[][50], int s)
{
	for(int i=0; i< s; i++)
	{
		for(int j=0; j<s; j++)
		{
			if(i>j)
			{
				printf("0\t");
			}
			else
			{
				printf("%d\t", a[i][j]);
			}
		}
		printf("\n");
		
	}		
}

void create_lower_matrix(int a[][50], int s)
{
	for(int i=0; i< s; i++)
	{
		for(int j=0; j<s; j++)
		{
			if(i<j)
			{
				printf("0\t");
			}
			else
			{
				printf("%d\t", a[i][j]);
			}
		}
		printf("\n");
		
	}		
}

int main()
{
	
	int a[50][50];
	
	input_matrix(a, 3);
	
	printf("Input Matrix \n");
	print_matrix(a, 3);
	
	printf("Upper Triangle Matrix\n");
	create_upper_matrix(a, 3);
	
	printf("Lower Triangle Matrix\n");
	create_lower_matrix(a, 3);	
	
	return 0;
}