#include<stdio.h>

int main()
{
	int rows=3, cols=3;
	int a[rows][cols];
	

	printf("Enter matrix values\n");
	for(int i = 0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	// Get Non Zero elements count
	int count=0;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			if(a[i][j] != 0)
				count++;
		}
	}
	
	//printf("Total Non Zero Elements %d\n", count);
	
	// Store non zero elements in sparse matrix
	int s_matrix[3][count];
	int k=0;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			if(a[i][j] != 0)
			{
				s_matrix[0][k] = i; //row
				s_matrix[1][k] = j; // cols
				s_matrix[2][k] = a[i][j]; //value
				
				k++;
			}
		}
	}
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<k; j++)
		{
			printf("%d\t", s_matrix[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}