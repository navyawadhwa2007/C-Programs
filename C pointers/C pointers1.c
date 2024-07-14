#include<stdio.h>
int main(){
	
            
	int x=5,*ptr;
	
	ptr=&x;
	
	printf("value of x = %d\n",x);                 // 5
	printf("address of x = %u\n",&x);             //  6487572
	printf("value of pointer = %d\n",ptr);        //  6487572
	printf("value of x by pointer=%d\n\n",*ptr);  //   5
	
	
	x=*ptr++;
	/*
	In this case, we will work from right to left;
	so first ptr will be incremented and not *ptr
	*/	
	printf("value of x = %d\n",x);                 // 5
	printf("address of x = %u\n",&x);             //  6487572
	printf("value of pointer = %d\n",ptr);        //  6487576
	printf("value of x by pointer=%d\n\n",*ptr);  //  6487576 why so? because pointer value is incremented,and now value it stores as address doesnot points to any value


	x=*(++ptr);
	/*
	here ptr is incremented and that incremented value is stored in x
	*/
	printf("value of x = %d\n",x);//  6487576
	printf("address of x = %u\n",&x);//  6487572
	printf("value of pointer = %d\n\n",ptr);//  6487576
	
	
	x=++(*ptr);
	/*
	In this case, *ptr will be incremented not ptr
	the value that is pointed by the pointer will be incremented
	*/
	printf("value of x = %d\n",x); //6
	printf("address of x = %u\n",&x); //  6487572
	printf("value of pointer = %d\n\n",ptr);//  6487572
	
	
	
	
	x=(*ptr)++;
	
	/*
	here, the value of *ptr will be assigned to x and then incremented
	however, we are unable to use the incremented value
	*/
	
	printf("value of x = %d\n",x);
	printf("address of x = %u\n",&x);
	printf("value of pointer = %d\n\n",ptr);
	

	
	
	
	
	
	
	
	
	
	return 0;
	
}
