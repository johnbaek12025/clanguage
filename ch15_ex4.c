#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#include<ctype.h>


char * g_arData[2][3] = {
	{"Test", "String", "Data"},
	{"Choi", "Ho", "Sung"} };
char *(*g_pTest)[3] = g_arData;

char *(*TestFunc(void))[3]{
	return g_pTest;
}

void main( int argc, char *argv[]) {
	char *(*(*pfTest)(void))[3] = NULL;
	char *(*paszResult)[3] = NULL;

	pfTest = TestFunc;
	paszResult = pfTest();

	puts(paszResult[0][0]);
	puts(paszResult[0][1]);
	puts(paszResult[1][2]);
}