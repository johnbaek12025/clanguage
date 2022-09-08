#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#include<ctype.h>

// 단일 연결 리스트의 노드를 구성할 구조체 정의
typedef struct _USERDATA {
	char szName[16];
	char szPhone[16];
	struct _USERDATA *pNext;// 주소 는 항당 4bytes를 가진다.
}USERDATA; // 따라서 USERDATA 구조체의 메모리는 36bytes를 가진다.

void main() {
	// USERDATA 구조체 배열을 선언 후 초기화
	USERDATA UserList[3] = {
		{"유재석", "1234", NULL},
		{"박명수", "2345", NULL},
		{"정형돈", "3456", NULL},
	};
	USERDATA *pTmp = NULL; //임시 포인터 변수

	// 각 노드들의 구조체를 서로 연결 해서 연결 리스트를 구성
	UserList[0].pNext = &UserList[1];
	UserList[1].pNext = &UserList[2];
	UserList[2].pNext = NULL;

	// 연결 리스트의 head를 임시 포인터 변수에 저장
	pTmp = &UserList[0];

	while (pTmp != NULL) {
		// 포인터를 통해 구조체의 멤버 변수에 접근시 "->"를 이용한다.
		printf("%s, %s\n", pTmp->szName, pTmp->szPhone);
		// 다음 노드로 넘어가는 것
		pTmp = pTmp->pNext;
	}
}
