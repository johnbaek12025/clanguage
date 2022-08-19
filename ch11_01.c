#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>

int GetLength(char *psStr) {
	char c = 'x';
	int ncnt = 0;
	while (c != NULL) {		
		c = *(psStr + ncnt);
		++ncnt;
	}
	printf("length of string: %d\n", ncnt);

}

void main() {	
	char *sTxt = "Hello My";

	GetLength(sTxt);
}