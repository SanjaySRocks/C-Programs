// Program to add 2 matrix using 2d array
#include<stdio.h>

#define rows 3
#define cols 3

void input_matrix(int a[rows][cols])
{
	for(int i = 0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}	
}


void print_matrix(int a[rows][cols])
{
	for(int i = 0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

void add_matrix(int a[rows][cols], int b[rows][cols], int sum[rows][cols])
{
	for(int i = 0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
}

int main(){
	int sum[rows][cols];
	
	int a_matrix[rows][cols];
	int b_matrix[rows][cols];
	
	printf("Enter Matrix 1 Values\n");
	input_matrix(a_matrix);
	
	printf("Enter Matrix 2 Values\n");
	input_matrix(b_matrix);
	
	// Adding
	add_matrix(a_matrix, b_matrix, sum);
	
	// Printing Sum
	printf("Sum of two Matrix:\n");
	print_matrix(sum);
	
	
	return 0;
}