#include<stdio.h>
#include<string.h>

void main() {	
	/*
	for (i = 1; i < 6; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((5 - j) <= i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	*/
	/*
	int i=0, j=0, k = 0;	

	for (i = 1; i <= 5; ++i, k = 0)
	{
		for (j = 1; j <= 5 - i; ++j)
		{
			printf(" ");
		}

		while (k != 2 * i - 1)
		{
			printf("%d", k);
			++k;
		}

		printf("\n");
	}
	
	int i = 0;
	int nmax = 0;
	int nmin = 1024;
	while (i < 5)
	{
		int j;
		scanf_s("%d", &j);
		if (nmax < j)
		{
			nmax = j;
		}
		else if (nmin > j)
		{
			nmin = j;
		}		
		++i;
	}
	printf("최댓값: %d, 최솟값: %d", nmax, nmin);
	

	//5
	char cs[200];
	int ncnt = 0, i;

	printf("Enter the sting:\n");
	gets_s(cs, strlen(cs));
	for (i = 0; cs[i] != '/'; i++)
	{
		if (cs[i] == 't')
		{
			++ncnt;
		}
	}

	printf("%d", ncnt);
	

	//6
	char ch[200];
	int i = 0;
	int ncnt = 0;
	gets_s(ch,  sizeof(ch));

	for (i = 0; ch[i] ; i++)
	{		
		if (ch[i] == ' ')
		{
			continue;
		}
		else {
			++ncnt;
		}
	}
	printf("%d", ncnt);
	*/

	int i = 0, j = 0, k = 0, nch1 = 1, nch2 = 1, nch3 = 1, nch4 = 1;

	for (i = 1; i <= 5; ++i, k = 0)
	{
		for (j = 1; j <= 5 - i; ++j)
		{
			printf("\t");
		}		
		while (k != 2 * i - 1)
		{			
			printf("%d\t", nch1);
			++nch1;
			++k;
		}

		printf("\n");
	}
	/*
	printf("\n");
	for (i = 1; i < 6; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((5 - j) <= i)
			{				
				printf("%d\t", nch2);
				++nch2;
			}
			else
			{
				printf("\t");
			}
		}
		printf("\n");
	}

	printf("\n");

	for (i = 1; i < 6; i++)
	{
		for (j = 0; j < 5; j++)
		{
			
				printf("%d\t", nch3);
				++nch3;
			
		}
		printf("\n");
	}
	printf("\n");
	for (i = 1; i < 6; i++)
	{
		for (j = 0; j < 5; j++)
		{

			if (j < i)
			{
				printf("%d\t", nch4);
				++nch4;
			}
			else {
				printf("\t");
			}

		}
		printf("\n");
	}

	int ex_num;
	printf("\n아무키나 입력하세요: ");	
	scanf_s("%d", &ex_num);
	*/
}