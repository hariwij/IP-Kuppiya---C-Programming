#include<stdio.h>

int main(void){
	
	int player_count, p, tmp_score, r, p_total;
	
	printf("Enter player count : ");
    scanf("%d", &player_count);
    
    for(p=1;p<=player_count;p++){
		p_total=0;
    	printf("Enter player %d details.\n",p);
    	for(r=1;r<=4;r++){
    		printf("\tround %d - ",r);
    		scanf("%d",&tmp_score);
    		p_total+=tmp_score;
		}
		printf("avarage score - %f\n\n",p_total/4.0);
	}
	
	return 0;
}
