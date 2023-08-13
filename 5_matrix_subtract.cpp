// Program to subtract 2 matrix using 2d array
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

void sub_matrix(int a[rows][cols], int b[rows][cols], int sub[rows][cols])
{
	for(int i = 0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			sub[i][j] = a[i][j] - b[i][j];
		}
	}
}

int main(){
	int sub[rows][cols];
	
	int a_matrix[rows][cols];
	int b_matrix[rows][cols];
	
	printf("Enter Matrix 1 Values\n");
	input_matrix(a_matrix);
	
	printf("Enter Matrix 2 Values\n");
	input_matrix(b_matrix);
	

	// Subtracting
	sub_matrix(a_matrix, b_matrix, sub);
	
	// Printing
	printf("Subtraction of two Matrix:\n");
	print_matrix(sub);
	
	
	return 0;
}