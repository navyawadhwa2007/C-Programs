#include<stdio.h>
int main(){
	int a=5;
	int *pa;
	int**ppa;
	pa=&a;
	ppa=&pa;
	printf("Address of a=%u\n",&a);
	printf("pa= Address of a =%u \n",pa);
	printf("*pa = a = %d\n\n",*pa);
	
	printf("Address of pa=%u\n",&pa);
	printf("ppa= Address of pa =%u \n",ppa);
	printf("*ppa = pa = %d\n\n",*ppa);
	
	printf("**ppa = a = %d\n",**ppa);
	
	

	return 0;
	
	
	
}
