#include<stdio.h>


void demo4() {
	int a[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	int(*ptr)[4];

	ptr = a;

	printf("ptr = %d\n", **ptr);
	ptr++;
	printf("ptr = %d\n", **ptr);
	ptr++;
	printf("ptr = %d\n", **ptr);
}

void demo3(void) {
	printf("Entering demo\n");
	int a[10];

	for (int i = 0; i < 10; i++) {
		a[i] = (i + 1);
	}

	for (int i = 0; i < 15; i++) {
		printf(" i = %d\n", a[i]);
	}
}
int main(int argc, char** argv) {
	//demo3();
	demo4();
	return 0;
}