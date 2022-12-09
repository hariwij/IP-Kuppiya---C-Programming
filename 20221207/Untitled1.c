#include<stdio.h>

float caldiscount(float amount , float percentage);


int main()
{
	float a=1500;
	float p=1.5;
	float d;
	
	d=caldiscount(a,p);
	
	printf("%.2f",d);
	
	return 0;
}

float caldiscount(float amount , float percentage)
{
	float dis;
	dis=amount/100*percentage;
	return dis;
}

