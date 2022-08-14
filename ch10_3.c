#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>


void main() {
	char *pszData[5] = { "f", "c", "a", "e", "d" };
	int i = 0, j = 0, nLeast = 0, res = 0;
	char *sTmp;


	
	
	for (i = 0; i < 5; ++i) {
		nLeast = i;
		for (j = i + 1; j < 5; ++j) {
			res = strcmp(*(pszData + nLeast), *(pszData + j));
			if (res > 0)
				nLeast = j;
		}		
		sTmp = pszData[i];
		pszData[i] = pszData[nLeast];
		pszData[nLeast] = sTmp;

		printf("%s\n", *(pszData + i));
	}
	
	
}