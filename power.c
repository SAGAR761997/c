#include<stdio.h>
int power(int,int);
void main(){
	int base,n,a;
	scanf("%d %d",&base,&n);
	a=power(base,n);
	printf("%d",a);
}

int power(int base,int n){
	int p;
	for(p=1;n>0;--n){
		p=p*base;
	}
	return p;
}
