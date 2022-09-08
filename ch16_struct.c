#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#include<ctype.h>


struct USERDATA {
	int nAge;
	char szName[16];
	char szPhone[16];
};

void main() {
	/*
	struct USERDATA UserData = { 0 };
	UserData.nAge = 20;
	sprintf(UserData.szName, "%s", "Choi Ho-sug");
	sprintf(UserData.szPhone, "%s", "1234-1234");
	*/
	struct USERDATA UserData = { 20, 
								"Choi Ho-Sung", 
								"1234-1234" };

	struct USERDATA *pData = &UserData;

	printf("%d\n", pData->nAge);
	printf(pData->szName);
	printf(pData->szPhone);
	
}