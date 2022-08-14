#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>


void main() {
	int i = 0, j = 1, n = 4, ncnt = 0;
	int danData[5][4] = { 0 };
	int x = -1, y = 0;
	int nTotal = 0;


	while (n > y) {
		for (i = 0; i < n; ++i) {						
			if (i < n - 1) {
				danData[y][i] = ++ncnt;
			}
			else
				danData[y][i] = ncnt * (ncnt + 1) / 2;
		}
		++y;
	}

	for (i = 0; i < 4; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			printf("%d\t", danData[i][j]);
		}
		printf("\n");
	}
}