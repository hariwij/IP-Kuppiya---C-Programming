#include <stdio.h>

int main(void)
{

	FILE *file;
	int emp,day;
	char emp_number[20],emp_name[30];
	int present;
	
	
	file=fopen("attendance.dat","w");
	
	if(file==NULL){
		printf("Failed to open file.");
		return -1;
	}
	
	for(emp=0;emp<2;emp++){
		printf("Enter employee %d number : ", emp+1);
		scanf("%s",emp_number);
		
		printf("Enter employee %d name : ", emp+1);
		scanf("%s",emp_name);
		
		fprintf(file,"%s\t%s\t",emp_number,emp_name);
		
		for(day=0;day<7;day++){
			printf("Enter attendance for day %d : ", day+1);
			scanf("%d",&present);
			fprintf(file,"%d ", present);
		}
		fprintf(file,"\n");
	}
	
	fclose(file);
	
	return 0;
}

