#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main() {
	
	char szbuffer[12] = { "I am a boy." };
	int nData = 1835081801; // aslr로 I am에 대한 dec 값

	puts(&nData);//NULL이 나올 때까지 출력 I am儆儆儆儆I am a boy.

	/*
	        49 20 61 6d cc cc cc  I am???
0x0019FEDB  cc cc cc cc cc 49 20  ?????I
0x0019FEE2  61 6d 20 61 20 62 6f  am a bo
0x0019FEE9  79 2e 00 cc cc cc cc
	*/

	// 자료형 = 일정 길이의 메모리에 저장된 정보를 해석하는 방법
	
		
 }   
