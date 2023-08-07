// Program to insert an element in an array
#include<iostream>

using namespace std;

void InsertElement(int a[], int size, int pos, int val)
{
	cout<<"Before Insert"<<endl;
	
	for(int i=0; i<size; i++)
		cout<<a[i]<<endl;
	

	for(int x = size-1; x >= pos-1; x--)
	{
		a[x+1] = a[x];
	}
	
	a[pos-1] = val;
	size++;
	
	cout<<"\nAfter Insert"<<endl;
	
	for(int i=0; i<size; i++)
		cout<<a[i]<<endl;	
}

int main()
{
	int size = 5;
	int a[size] = { 10,20,40,50,60};
	
	InsertElement(a,size, 3, 30);
	
	return 0;
	
}