// Program to search an element in an array
#include<stdio.h>

// Linear Search
int LSearchElement(int a[], int size, int val)
{
	for(int i=0; i<size; i++)
	{
		if(a[i] == val)
			return i;
	}
	
	return -1;
}

int BSearchElement(int a[], int size, int val, int left, int right)
{
	
	while(left <= right)
	{
		int mid = right-left / 2;
		
		if(val == a[mid])
			return mid;
			
		if(val < a[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	
	return -1;
}

int main()
{
	int a[5]={1,4,5,9,11};
	
	int i = LSearchElement(a, 5, 5);	
	printf("Value Found Index - %d\n", i);
	
	int x = BSearchElement(a, 5, 5, 0, 5-1);
	printf("Value Found Index - %d", x);
	
	
	return 0;
}