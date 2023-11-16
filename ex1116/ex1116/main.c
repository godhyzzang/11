#include <stdio.h>

int main(void) {
	
	
		int i = 300; //300으로 변경해서도 해보기
		int* pi = &i; //int형을 담으려면 int형 포인터변수를 사용해야한다.
		char* pc = &i; //char형 변수를 가리키는 포인터변수이므로 300을 모두 담지 못 함 
		printf("% i, % i, % i\n" , i, *pi, *pc);
	
	return 0;
}