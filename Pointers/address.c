#include<stdio.h>
void demo1(void);
/*
int main(int argc, char** argv) {

	demo1();
	return 0;
}
*/

void demo1(void) {
	float* jumb(float*);
	float b = 23.5, * p = &b;

	printf("Before call : %u \n", p);
	p = jumb(&b);
	printf("After call : %u \n", p);
}

float* jumb(float* r) {
	return ++r;
}