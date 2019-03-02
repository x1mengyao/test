#include <stdio.h>
#include <ctype.h>
#define NUM 20
int main()
{
	char str[NUM];
	int i;
	printf("\nEnter a string.");
	gets(str);
	if(str[0] >= '0' && str[0] <= '9'){
		printf("\nInvalid identifier.");
		return 0;
	}
	for(i = 1; i < NUM; i++){
		if(!isalnum(str[i]) && str[i] != '_'){
			printf("\nInvalid identifier.");
			break;
		}
	}
	printf("\nValid identifier.");			
	
	getch();
}


	