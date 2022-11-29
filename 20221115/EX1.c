#include<stdio.h>

int main(void)
{
	int arr[10]={0};
	int i=0;
	int max;
		
	while(i<10){
		printf("Enter number %d : ",i);
		scanf("%d", &arr[i]);
		if(arr[i] >= 10 && arr[i] <= 100)
			i++;
	}
		
	// display values in array & calculate max value
	
	max=arr[0];
	
	for(i=0;i<10;i++){
		if(arr[i]>max)
			max=arr[i];
		printf("Number %d is : %d\n",i,arr[i]);
	}

	printf("Maximum value is : %d\n",max);
	
	
	return 0;
}
