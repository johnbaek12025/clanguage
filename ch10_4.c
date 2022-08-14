#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>


void main() {
	int i = 0, j = 1, n = 5, ncnt = 0;
	int danData[5][5] = { 0 };
	int x = -1, y = 0;


	while (n > 0) {
		for (i = 0; i < n; ++i) {			
			x += j;
			danData[y][x] = ++ncnt;
		}
		--n;
		for (i = 0; i < n; ++i) {
			y += j;
			danData[y][x] = ++ncnt;
		}
		j *= -1;
	}

	for (i = 0; i < 5; ++i)
	{
		for (j = 0; j < 5; ++j)
		{
			printf("%d\t", danData[i][j]);
		}
		printf("\n");
	}
}