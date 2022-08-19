#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>

void ReferenceSwap(int *pnA, int *pnB) {
	/*
		위의 전달받은 매개변수로 x와 y의 주소상수를 전달 받아
		각각 pnA와 pnB에 x와 y의 주소를 저장 한다.
		그리고 주의 할 점은 pnA와 pnB에 저장된 주소를 교환하는 것이 아닌
		포인터 변수에 저장된 주소 상수를 간접 지정한 메모리 x, y의 값이 교환 된다.
	*/
	int nTmp = 0;
	nTmp = *pnA;
	*pnA = *pnB;
	*pnB = nTmp;
}


void ValueSwap(int nA, int nB) {
	int nTmp = 0;
	nTmp = nA;
	nA = nB;
	nB = nTmp;
}

void main() {
	int x = 5, y = 9;
	ValueSwap(x, y);
	printf("%d, %d\n", x, y);
	ReferenceSwap(&x, &y);
	printf("%d, %d\n", x, y);
}