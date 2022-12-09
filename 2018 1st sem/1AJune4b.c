#include <stdio.h>

int main(void)
{

	FILE *file;
	int emp,day,found=0;
	char emp_name[30];
	int emp_id,emp_no,present,total=0;
	
	
	file=fopen("attendance.dat","r");
	
	if(file==NULL){
		printf("Failed to open file.");
		return -1;
	}
	printf("Enter emp id to search : ");
	scanf("%d",&emp_id);
	for(emp=0;emp<2;emp++)
	{
		total=0;
		fscanf(file,"%d %s",&emp_no,emp_name);
		for(day=0;day<7;day++){
			fscanf(file,"%d ", &present);
			if(present)total++;
		}
		if(emp_id==emp_no)
		{
			found=1;
			printf("Total attendance : %d\n",total);
		}
	}
	if(!found){
		printf("Emp id you entered cannot be found!");
	}
	fclose(file);
	
	return 0;
}

