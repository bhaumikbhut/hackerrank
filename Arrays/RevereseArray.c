#include <stdio.h>

void rverseArray(int arr[],int start,int end)
{
	int temp;
	while(start<end)
	{
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	
	}
}

void printArray(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
		printf("%d",arr[i]);
	printf("\n");
}
int main(int argc, char *argv[]) {
	
	int arr[] = {1, 2, 3, 4, 5, 6};
	printArray(arr, 6);
	rverseArray(arr, 0, 5);
	printf("Reversed array is \n");
	printArray(arr, 6);    
	return 0;
	
}