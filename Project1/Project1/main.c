#include <stdio.h>

int main(void)
{

	printf("int : %d\n", 1);
	printf("char : %d\n", ' ');

	printf("print integer : %d\n", 127);
	printf("%d + %d = %d", 5, 7, 5+7);
	printf("int %d, float %f, char %c, string %s\n", 1, 1.0f, '1', "1");

	// 이름, 국어점수, 영어점수, 수학점수, 총점, 평균
	printf("이름    국어   영어  수학   총점   평균\n");
	printf("=======================================\n");
	printf("%s    %d    %d    %d   %d    %.2f\n", "김길동", 80, 90, 80, 80+90+80, (80 + 90 + 80) / 3.f);

	printf("%10s%s\n", "hello", "world");
	printf("%-10s%s\n", "hello", "world");
	printf("%10.2s%s\n", "hello", "world");

	printf("lead zero test : %d\n", 3);
	printf("lead zero test : %3d\n", 3);
	printf("lead zero test : %03d\n", 3);	


	printf("abcde12345\r123");

	printf("쌍따옴표 표현 : \" ");
	printf("쌍따옴표 표현 : \' ");
	printf("역슬래시 표현 : \\ ");

	printf("현재 작업중인 폴더 이름은 C:\\Users\\TJ\\source\\repos\\Project1\n");

	printf("int의 크기 : %d\n", sizeof(int));
	printf("float의 크기 : %d\n", sizeof(float));
	printf("char의 크기 : %d\n", sizeof(char));



	//printf("Hello,World!");
	//printf("Hi TJ");

	//printf("\n");
	//printf("%f :: %f :: %f, %f, %f", 1.0, -0.100, 2., .5123456, -.100f);

	//// 주석 단축키
	//// ctrl + / 
	///*{


	//}*/

	return 0;

	// ctrl + F5 : run without debug
	// ctrl + s : save


	// 주석 메모
	// () : 소괄호, 괄호
	// {} : 중괄호, 블럭
	// [] : 대괄호

	// " : double quote, 쌍따옴표
	// ' : single quote, 홑따옴표
	// ` : back tick, 백틱
	
	// / : slash, 슬래시
	/*
		범위 구간 
	*/

	// ㅡㅡㅡ
	//기초 프로그램 입학서 - 2주 정도

	//	설치프로그램
	//	1.크롬
	//	2. zip - 반디집
	//	3.디스코드 / https://discord.gg/bubFfcwNQ6

	//프로그래밍, DB, UI

	//	1. 프로그래밍(C, JAVA) 3주 후 미니프로젝트 바로 함(5월 초 ? ) - 시간 부족 - 난이도6
	//	미니프로젝트 - 2, 3000라인
	//	2. 디비 - 상대적 여유 - 난이도 3
	//	3. UI - 상대적 여유 - 난이도 3
	//	ㅡㅡㅡ
	//	4. sevelet / jsp > (1, 2, 3)의 총집합이라 생각 > 난이도 7
	//	5.세미프로젝트 7, 8000 라인
	//	ㅡㅡㅡ
	//	6. spring > 난이도 10(7~8에서 시작) > 3주 정도 ?
	//	7. react > 난이도 9 (자바스크립트 계보)
	//	8. android > 난이도 4 > 자바학습 후 하면 상대적으로 할만함
	//	final

	/*기술블로그 / 코드 오류 등 문제있을때 등 운영해보기
		좋은 포트폴리오 될거임

		티스토리 / 벨로그 / 기록만 한다면 노션*/


}

