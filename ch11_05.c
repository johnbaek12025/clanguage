#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>

int Search(char *psS, char c) {
	int i = 0;
	char a = "";
	while (a != c) {
		a = *(psS + i);
		if (a == c)
			return i;
		++i;
	}

	return -1;
}

void main() {	
	char *psStr = "Hey What is going on~!!";
	char s;
	int res;
	scanf("%c", &s);

	res = Search(psStr, s);
	printf("%d\n", res);

	
}