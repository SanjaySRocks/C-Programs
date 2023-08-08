// Program to add all odd numbers and even numbers in an array
#include<stdio.h>

int main()
{
	int size = 10;
	int total_even, total_odd;
	
	int a[size];
	
	printf("Enter the array size\n");
	scanf("%d", &size);
	
	printf("Enter values of array\n");
	
	for(int i=0; i<size;i++)
		scanf("%d", &a[i]);
	
	for(int i=0; i<size; i++)
	{
		if(a[i] % 2 == 0)
			total_even += a[i];	
		else
			total_odd += a[i];
	}
	
	printf("Total Odd - %d\nTotal Even - %d", total_odd, total_even);
	
	
	return 0;
}