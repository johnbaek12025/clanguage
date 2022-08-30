#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#include<ctype.h>

int CallBackFunc(char *pszData1, char*pszData2);

int TestFunc(int nCount, char *apszData[], int(*pfCallBack)(char*, char*) ) { 
	char *pszTmp = NULL;
	int i = 0, j = 0;
	for (i = 0; i < nCount - 1; ++i) {
		for (j = i + 1; j < nCount; ++j) {
			if (pfCallBack(apszData[i], apszData[j]) > 0) {
				pszTmp = apszData[i];
				apszData[i] = apszData[j];
				apszData[j] = pszTmp;
			}
		}		
	}

}


int CallBackFunc(char *pszData1, char *pszData2) {
	// return strcmp(pszData2, pszData1); //내림차순
	return strcmp(pszData1, pszData2); // 오름차순
}

void main( int argc, char *argv[]) {
	int i = 0;
	char *aszData[3] = { "유재석", "박명수", "정형돈" };
	TestFunc(3, aszData, CallBackFunc);

	for (i = 0; i < 3; ++i) {
		puts(aszData[i]);
	}
}

