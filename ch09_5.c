#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>


void main() {	
	int nInput = 0, i = 0;
	printf("Input length : ");
	scanf("%d", &nInput);
	char *pszData = malloc(sizeof(char) * nInput + 1);	
	scanf("%s", pszData);
	fflush(stdin);
	for (i = nInput - 1; i > 0 ; i--) {
		putchar(pszData[i]);
	}
	
	
	free(pszData);
 }  
