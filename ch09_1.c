#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>


void main() {	
	int nInput = 8;
	char *pszName1 = malloc(sizeof(char) * nInput);
	char *pszName2 = malloc(sizeof(char)* nInput);;
	int res = 0;

		
	scanf("%s", pszName1);
	scanf("%s", pszName2);


	res = strncmp(pszName1, pszName2, 2);
	if (res == 0) {
		printf("같은 성씨");
	}
	else {
		printf("다른 성씨");
	}
	free(pszName1);
	free(pszName2);
 }  