#include<stdio.h>
#include<string.h>

void main() {
	/*
	int alist[5] = { 30, 40, 10, 50, 20 };
	int i, j, ntmp;

	// bubble sorting
	for (i = 0; i < 5; ++i)
	{
		for (j = i + 1; j < 5; ++j)
		{
			if (alist[j] > alist[i])
			{
				ntmp = alist[i];
				alist[i] = alist[j];
				alist[j] = ntmp;
			}
			
		}
	}
	
	for (i = 0; i < sizeof(alist)/sizeof(int); ++i)
		printf("%d\n", alist[i]);

	int nmax = 0;

	for (i = 0; i < 5; ++i)
	{
		nmax = i;
		for (j = i + 1; j < 5; ++j)
		{
			if (alist[nmax] < alist[j])
			{
				nmax = j;
			}
		}
		ntmp = alist[i];
		alist[i] = alist[j];
		alist[j] = ntmp;
	}

	for (i = 0; i < sizeof(alist) / sizeof(int); ++i)
		printf("%d\n", alist[i]);
	
	// 지그재그 2차원 배열
	int i, j, n, ncnt = 1;
	int nmatrix[5][5] = { 0 };

	for (i = 0; i < 5; ++i)
	{
		n = i % 2;

		if (n == 1)
		{			
			for (j = 4; j >= 0; --j)
			{				
				nmatrix[i][j] = ncnt;
				ncnt = ncnt + 1;
			}
		}
		else {
			for (j = 0; j < 5; ++j)
			{				
				nmatrix[i][j] = ncnt;
				ncnt = ncnt + 1;
			}
		}
	}
	for (i = 0; i < 5; ++i)
	{
		for (j = 0; j< 5; ++j)
		{
			printf("%d\t", nmatrix[i][j]);
		}
		printf("\n");
	}
	*/

	//달팽이 배열 채우기
	int i, j = 1, x=-1, y=0, ncnt = 0;
	int n = 5;
	
	int nmatrix[5][5] = { 0 };

	while (0 < n)
	{
		for (i = 0; i < n; ++i)
		{
			x += j;
			nmatrix[y][x] = ++ncnt;

		}
		--n;
		for (i = 0; i < n; ++i)
		{
			y += j;
			nmatrix[y][x] = ++ncnt;
		}
		j *= -1;
	}

	for (i = 0; i < 5; ++i)
	{
		for (j = 0; j < 5; ++j)
		{
			printf("%d\t", nmatrix[i][j]);
		}
		printf("\n");
	}
	int except;
	scanf_s("%d", &except);
}