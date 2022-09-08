#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#include<ctype.h>

typedef struct STUDENT_SCORE {
	char name[30];
	float korean;
	float english;
	float math;
	float avg;
} STUDENT_SCORE;

void main() {
	STUDENT_SCORE *ptr_student_new = (STUDENT_SCORE *)malloc(sizeof(STUDENT_SCORE) * 5);

	strcpy(ptr_student_new->name, "박중하");
	ptr_student_new->korean = 70;
	ptr_student_new->english = 80;
	ptr_student_new->math = 60;
	ptr_student_new->avg = (ptr_student_new->english + ptr_student_new->math + ptr_student_new->korean) / 3;

	strcpy((ptr_student_new + 1)->name, "이효준");
	(ptr_student_new + 1)->korean = 60;
	(ptr_student_new + 1)->english = 70;
	(ptr_student_new + 1)->math = 90;
	(ptr_student_new + 1)->avg = (ptr_student_new->english + ptr_student_new->math + ptr_student_new->korean) / 3;


	strcpy((ptr_student_new + 2)->name, "장준하");
	(ptr_student_new + 2)->korean = 60;
	(ptr_student_new + 2)->english = 70;
	(ptr_student_new + 2)->math = 90;
	(ptr_student_new + 2)->avg = (ptr_student_new->english + ptr_student_new->math + ptr_student_new->korean) / 3;

	printf("%s, %f, %f, %f, 평균: %f\n", ptr_student_new->name, ptr_student_new->korean, ptr_student_new->english, ptr_student_new->math, ptr_student_new->avg);
	printf("%s, %f, %f, %f, 평균: %f\n", (ptr_student_new + 1)->name, (ptr_student_new + 1)->korean, (ptr_student_new + 1)->english, (ptr_student_new + 1)->math, (ptr_student_new + 1)->avg);
	printf("%s, %f, %f, %f, 평균: %f\n", (ptr_student_new + 2)->name, (ptr_student_new + 2)->korean, (ptr_student_new + 2)->english, (ptr_student_new + 2)->math, (ptr_student_new + 2)->avg);


}
