#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>


void main() {	
	int nInput = 0;
	scanf_s("%d", &nInput);
	int *a = 0;

	if (nInput > 100)
		a = (char*)calloc(100, sizeof(char));
	else if (nInput < 10)
		a = (char*)calloc(10, sizeof(char));
	else
		a = (char*)calloc(nInput, sizeof(char));
	
	fflush(stdin);
	puts(a);
	
	free(a);



 }  
