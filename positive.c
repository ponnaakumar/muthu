#include <stdio.h>

int main(void) {
	int i;
	scanf("%d",&i);
	if(i>0)
	{
		printf("positive");
	}
	else if(i<0)
	{
		printf("negative");
	}
	else
	{
		printf("zero");
	}
	
	return 0;
}
