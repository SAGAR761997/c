#include <stdio.h>

int max(int x,int y){        
	return(x>y)?x:y;     
}			  


void main (void){
	int a=100, b=200;
	int maximum = max(a,b);             //function call
	printf("MAXIMUM IS:%d", maximum);
}
