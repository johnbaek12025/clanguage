#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>


void main() {	
	int nInput = 0, i;
	scanf_s("%d", &nInput);

	char **nList = malloc(sizeof(char) * nInput);

	for (i = 0; i < nInput; ++i) {
		nList[i] = malloc(sizeof(char) * 12);
		scanf("%s", nList[i]);
	}
	for (i = 0; i < nInput; ++i) {
		printf("%s\n", nList[i]);
		free(nList[i]);
	}
 }  
