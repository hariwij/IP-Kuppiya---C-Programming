#include <stdio.h>

int main( void ){
	
    // declare variables
	int package;
	double total;
	
	// input
	
	printf( "Enter package : " );
	scanf( "%d" , &package );
	
	// process
	
//	switch( package )
//	{
//		case 1:
//			total=8000.0/100*97;
//			break;
//		case 2:
//			total=9500.0/100*95;
//			break;
//		case 3:
//			total=12500.0/100*93;
//			break;
//		default:
//			printf("invalid package!\n");
//			break;
//	}

	if(package==1)
	{
		total=8000.0/100*97;
	}
	else if(package==2)
	{
		total=9500.0/100*95;
	}
	else if(package==3)
	{
		total=12500.0/100*93;
	}else
	{
		printf("invalid package!\n");
	}
	
	// output
	printf("Total : %.2lf",total);
	
	return 0;
}
