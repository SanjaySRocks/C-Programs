// Program to multiply 2 matrix using 2d array
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

void multiply_matrix(int a[rows][cols], int b[rows][cols], int m[rows][cols])
{
	for(int i = 0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			m[i][j] = 0; 
		}
	}
	
	for(int i = 0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			for(int k=0; k<cols; k++)
				m[i][j] += a[i][k] * b[k][j];
		}
	}
}

int main(){
	int m[rows][cols];
	
	int a_matrix[rows][cols];
	int b_matrix[rows][cols];
	
	printf("Enter Matrix 1 Values\n");
	input_matrix(a_matrix);
	
	printf("Enter Matrix 2 Values\n");
	input_matrix(b_matrix);
	

	// Multiplication
	multiply_matrix(a_matrix, b_matrix, m);
	
	// Printing
	printf("Multiplication of two Matrix:\n");
	print_matrix(m);
	
	
	return 0;
}