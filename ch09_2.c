#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>


void main() {	
	int nInput = 1;
	int *a = malloc(nInput * sizeof(int)), *b = malloc(nInput * sizeof(int));
	int res = 0;

	scanf("%d", a);
	scanf("%d", b);
	res = memcmp(a, b, sizeof(int));

	if (res == 0) {
		printf("같음");
	}
	else {
		printf("다름");
	}
	free(a);
	free(b);
 }  
