#include <stdio.h>

int main(void) {
	int i = 10;
	char c = 'a';
	int* iptr=&i;
	char* cptr= &c;
	int* iptr2 = iptr;

	
	printf("i : % p\n % p(size: % i)\n", iptr, &i, sizeof(iptr)); 
	// 64bit 체계 visual studio를 사용하면 포인터의 크기가 4byte가 아닌 8byte가 나올 수도 있다.
	printf("c : % p\n % p(size: % i)\n", cptr, &c, sizeof(cptr));
	printf("iptr2 : % p, % i\n", iptr2, *iptr2);
	return 0;
}