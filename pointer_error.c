#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main() {
	/*
	char szsrcbuf[12] = { "Hello" };
	char szdstbuf[12] = { 0 };

	int a = 10;
	int b = 0;

	b = a;

	char *pszdata = NULL;

	pszdata = szsrcbuf; // shallow copy -> 주소만 복사
	// 단순히 주소만 복사 (shallow copy) vs 내용을 복사 (deep copy)
	//szsrcbuf = szdstbuf; l-value: 대입 연산이 가능한 변수 배열을 가리키는 식별자는 상수(r-value)

	memcpy(szdstbuf, szsrcbuf, sizeof(szdstbuf)); // deep copy -> 내용 복사
	*/

	/*
	//메모리 leak stack이 깨지는 코드
	char szsrcbuf[12] = { "Hello" };
	char szdstbuf[12] = { 0 };

	char *pszdata = malloc(sizeof(char) * 12);
	
	memcpy(szdstbuf, szsrcbuf, sizeof(szdstbuf));
	pszdata = szsrcbuf;
	puts(pszdata);
	free(pszdata);
	*/

	//위의 문제 해결법
	char szsrcbuf[12] = { "Hello" };
	char szdstbuf[12] = { 0 };

	char *pszdata = malloc(sizeof(char) * 12);
	//deep copy
	memcpy(pszdata, szsrcbuf, sizeof(char) * 12);
	puts(pszdata);
	free(pszdata);
 }   
