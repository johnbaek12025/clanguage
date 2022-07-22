#include<stdio.h>

void main() {
	int alist[5] = { 40, 20, 50, 30, 10 };
	int *palist = alist;
	int ntotal = 0;

	for (int i = 0; i < 5; ++i)	
		ntotal += alist[i];		
	printf("%d\n", ntotal);

	ntotal = 0;

	while (palist < alist + 5)
	{
		ntotal += *palist;
		palist++;
	}
	printf("%d\n", ntotal);

	int exeam = 0;
	scanf_s("%d", &exeam);

 }   


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main() {
	/*
		영역
		stack : scope, 변수 (1MB)
		heap : 동적 할당 (1.7 GB) 
		data - Read/Write: 전역변수(정적)
			 - Read : 문자열 상수

		Memory는 OS가 관리하는데 추가 메모리를 request 하면 공간을 허가 해준다.			

		동적 할당 -> Heap 영역 -> OS 로부터 메모리 공간을 할당 받고, 사용 하고 나면 반환 한다.

		malloc() 속도가 ↓ 그래서 고성능에서는 미리 많은 메모리를 할당 받은 다음
		사용 한다.
	*/

	int *plist = NULL;

	plist = malloc(sizeof(int) * 3);
	memset(plist, 0, sizeof(int)*3); //값을 할당 하기전에 0으로 초기화 하는것
	plist[0] = 10;
	plist[1] = 10;
	plist[2] = 10;

	//*(((char*)plist) + 12) = 'A'; // 위의 동적 할 당 부분에서 fd 부분에 'A'를 할당 하면 메모리 오버플로우 에러 발생 하지만 fd 영역을 넘어서 할당 하면 에러는 안남

	free(plist); // 메모리 반환 부분


 }   
