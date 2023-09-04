// Write a program to bubble sort an array 

#include<stdio.h>

void bubble_sort(int* arr, int n) {  
  int i, j;  
  for (i = 0; i < n - 1; i++) {  
    for (j = 0; j < n - i - 1; j++) {  
      if (*(arr+j) > *(arr+j+1)) {  
        int temp = *(arr+j);  
        *(arr+j) = *(arr+j+1);  
        *(arr+j+1) = temp;  
      }  
    }  
  }  
}  

int main()
{
	int n=0;
	
	printf("Enter size of an array:\n");
	scanf("%d", &n);
	
	int a[n];
	
	printf("Enter elements:\n");
	
	for(int i=0; i<n-1; i++)
		scanf("%d", &a[i]);
	
	
	bubble_sort(a, n);
	
	for(int i=0; i<n-1; i++)
		printf("%d ", *(a+i));
	
	printf("\n");
	
	return 0;
}
