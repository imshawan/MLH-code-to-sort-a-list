// The implementation of Bubble sort
#include <iostream.h>
#include <conio.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}


void bubbleSort(int arr[], int n)
{
int i, j;
int check;
for (i = 0; i < n-1; i++)
{
	check = 0;
	for (j = 0; j < n-i-1; j++)
	{
		if (arr[j] > arr[j+1])
		{
		swap(&arr[j], &arr[j+1]);
		check = 1;
		}
	}
	if (check == 0)
		break;
}
}

// Function to print the array
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		{
		if (i!=size-1)
			cout<<arr[i]<<",";
		else if (i==size-1)
			cout<<arr[i];
		}
}

// Driver program to test above functions
int main()
{
	clrscr();
	int arr[] = {12,19,15,44,97,29,0,32,11,23};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n);

	cout<<"Sorted array: \n";
	printArray(arr, n);
	return 0;

}
