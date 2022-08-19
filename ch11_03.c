#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>

void AscendOrder(int *pnArr, int len) {
	int i, j, max, nTmp;

	for (i = 0; i < len; ++i) {
		max = i;
		for (j = i + 1; j < len; ++j) {
			if (*(pnArr + max) < *(pnArr + j))
				max = j;			
		}
		nTmp = *(pnArr + i);
		*(pnArr + i) = *(pnArr + max);
		*(pnArr + max) = nTmp;
	}
}

void main() {	
	int nArr[5] = { 12, 3, 25, 7, 2 };
	int i = 0;
	int lenArr = sizeof(nArr) / sizeof(int);
	AscendOrder(nArr, lenArr);

	for (i = 0; i < lenArr; ++i) {
		printf("%d\n", nArr[i]);
	}	
}