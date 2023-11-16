#include <stdio.h>


int main(void) {
	
	int i;
	int grade[5];
	int average=0;

	for (i = 0; i < 5;i++) {
		printf("input grade[%i] = ",i);
		scanf("%d", &grade[i]);

	}
	
	//int* pa =grade;
	for (i = 0; i < 5; i++) {
		//printf("grade[%i] = %i\n", i, *(pa++));
		printf("grade[%i] = %i\n", i, *(grade+i)); //같은 의미
		//average = average + *pa;
		average = average + *(grade+i);

	}
	printf("Average = %i\n", average/5);

	
	return 0;
}