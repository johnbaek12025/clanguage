#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main() {

	//위의 문제 해결법
	char szsrcbuf[12] = { "Hello" };
	//char szdstbuf[12] = { 0 };
	char *pszbuf = "Hello";


	//deep copy
	//memcpy(szdstbuf, szsrcbuf, sizeof(szdstbuf));

	//내용 비교
	//if (memcmp(szsrcbuf, szdstbuf, sizeof(szsrcbuf)) == 0)
	if (pszbuf == "Hello")
		puts("same");
	else
		puts("Diff");

	char *psznewbuf = "Hello";

	// 문자열 상수 -> "Hello" PEimage Data 내부에 저장해서 같은 주소를 compile 할 때 사용한다.
	// 따라서 psznewbuf와 pszbuf에 할당된 문자열 상수와 비교할 때 사용하는 "Hello"는 같은 data 영역에 있다.


 }   
