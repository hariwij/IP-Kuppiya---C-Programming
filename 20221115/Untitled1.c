#include<stdio.h>
#include<string.h>

void getArray(int arr[], int size);

int main(void)
{
    int arr1[]={0,1,2,3,4};
    int i;
    
    printf("Enter numbers : \n");	
	for(i=0;i<5;i++){
		printf("Enter number %d : ",i);
		scanf("%d", &arr1[i]);
	}
    

	getArray(arr1,5);
	
	printf("\nAfter : ");	
	for(i=0;i<5;i++){
		printf("%d ",arr1[i]);
	}
	
	return 0;
}

void getArray(int arr[], int size)
{
	int i;
	for(i=0;i<size;i++){
    	arr[i]*=2;
	}
}



