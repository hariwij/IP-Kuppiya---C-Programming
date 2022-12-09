#include <stdio.h>

int main(void)
{
	char lights[4][4]={0};
	int r,c;
	
	for(r=0;r<4;r++){
		for(c=0;c<4;c++){
			printf("Enter color for [%d][%d] : ",r,c);
			scanf(" %c",&lights[r][c]);
		}
	}
	printf("Display : \n");
	for(r=0;r<4;r++){
		for(c=0;c<4;c++){
			printf("%c ",lights[r][c]);
		}
		printf("\n");
	}
	printf("\nRed bulb positions : \n");
	for(r=0;r<4;r++){
		for(c=0;c<4;c++){
			if(lights[r][c]=='R')
				printf("[%d,%d] ",r,c);
		}
	}
	
	return 0;
}

