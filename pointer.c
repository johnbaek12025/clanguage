#include<stdio.h>

void main() {
	int alist[5] = { 40, 20, 50, 30, 10 };
	int *palist = alist;
	int ntotal = 0;

	for (int i = 0; i < 5; ++i)	
		ntotal += alist[i];		
	printf("%d\n", ntotal);

	ntotal = 0;

	while (palist < alist + 5)
	{
		ntotal += *palist;
		palist++;
	}
	printf("%d\n", ntotal);

	int exeam = 0;
	scanf_s("%d", &exeam);

 }   
