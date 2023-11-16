#include <stdio.h>


//void swap(int* x, int* y) {
//	int* temp;
//	temp = x;
//	x = y;
//	y = temp;
//
//}

void swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(void) {
	
	int a = 3;
	int b = 5;
	swap(&a, &b); //함수 안에서 return값을 Swap하는게 아니라 main함수 자체의 a,b 값을 swap하게 됨.

	printf("a :%i, b:%i\n", a,b);
	
	
	return 0;
}