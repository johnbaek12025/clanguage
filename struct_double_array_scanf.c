#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#include<ctype.h>


void main() {
	
	int row = 4, col = 4;
	int i = 0, j = 0;
	float **pptr_int_arr = (float**)malloc(sizeof(float*) * row);

	for (i = 0; i < row; i++) {
		pptr_int_arr[i] = (float*)malloc(sizeof(float) * col);
		for (j = 0; j < col; j++) {
			scanf("%f", &pptr_int_arr[i][j]);
		}
	}

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%f\t", pptr_int_arr[i][j]);
		}
		printf("\n");
	}
}
