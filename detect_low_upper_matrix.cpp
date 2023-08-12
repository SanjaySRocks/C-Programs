// Program to check whether enter matrix is lower triangular or upper triangular matrix
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

int isLowerMatrix(int a[][50], int s)
{
	int flag=0;
	for(int i=0; i< s; i++)
	{
		for(int j=0; j<s; j++)
		{
			if(i<j && a[i][j] !=0)
			{
				flag=1; break;
			}
		}	
	}
	
	if(flag == 1)
		return 0; // not found
	else
		return 1;	// found
}

int isUpperMatrix(int a[][50], int s)
{
	int flag=0;
	for(int i=0; i< s; i++)
	{
		for(int j=0; j<s; j++)
		{
			if(i>j && a[i][j] !=0)
			{
				flag=1; break;
			}
		}
	}	
	
	if(flag == 1)
		return 0; // not found
	else
		return 1;	// found
			
}

int main()
{
	
	int a[50][50];
	
	input_matrix(a, 3);
	
	printf("Input Matrix \n");
	print_matrix(a, 3);
	
	if(isUpperMatrix(a, 3))
	{
		printf("It is Upper Matrix");
	}
	else if(isLowerMatrix(a,3))
	{
		printf("It is Lower Matrix");
	}
	else
		printf("Its neither lower or upper triangle matrix");
	
	return 0;
}