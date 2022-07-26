#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main() {
	// 주소에서 주소를 빼면 index가 나온다.
	char szbuffer[12] = { "I am a boy." };

	char *pszFound = strstr(szbuffer, "am");
	int nIndex = pszFound - szbuffer; //2가 나온다.
	

	

 }   
