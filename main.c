#include <stdio.h>

void sub1();
void sub3();
void sub2(){
	int i;
	for(i=0; i<10; i++){
		printf("*");
	}
}

void main(){
	sub1();
	sub2();
	sub3();
	return 0;
}
void sub3(){
	puts("00");
}
