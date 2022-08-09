#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>


void main() {	
	char *pszData = NULL;
	int nInput = 0;
	int i = 0;

	printf("Input length : ");
	scanf("%d", &nInput);
	pszData = (char*)malloc(sizeof(char) * nInput + 1);// without nInput + 1 there is an error about Heap corruption

	fflush(stdin);
	scanf("%s", pszData);
	
	for (i = 0; i < nInput; ++i) {
		printf("%c\n", *(pszData + i));
	}

	printf("%d", i);


	free(pszData);
 }  
