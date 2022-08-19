#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>


void Add(int (*pnRef)[5], int row) {
	int i = 0, j, nums = 0;	
	for (i = 0; i < row; ++i) {
		for (j = 0; j < 5; ++j){
			nums += *(*(pnRef + i) + j);
		}
	}
	printf("%d\n", nums);
}

void main() {	
	int nArr[2][5] = { 
					 {2, 3, 6, 10, 25},
					 {42, 3, 1, 2, 3}
					};

	int rowArr = sizeof(nArr) / sizeof(nArr[0]);
	Add(nArr, rowArr);
}