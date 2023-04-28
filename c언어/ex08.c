#include <stdio.h>
void main(){
	//조건문 : if~, if~else~, if~else~ if~else~, switch~case~break
	
	int edps = 90;
	int db = 95;
	int pg = 70;
	int tot=0;
	/*scanf("컴퓨터일반 점수: %d\n", edps);
	scanf("데이터베이스 점수: %d\n", db);
	scanf("프로그래밍 점수: %d\n", pg);*/
	char pass = 'F';
	float avg = 0.0f;
	
	//if~
	//만약 평균이 60이상이라면 pass는 'T'이고 아니면 'F'
	tot = (edps + db + pg);
	avg = (float) tot/3;
	if (avg>=60) pass = 'T'; //아니면 F는 이미 char pass에 값이 들어가 있음
	
	//pass가 'T'이면 "합격", 'F'이면 "불합격"을 출력
	printf("합격 여부: ");
	if (pass=='T') {
		printf("합격\n");
	} else {
		printf("불합격\n");
	}
	
	//90~60 점수 구간에 따라 수우미양가 나누기
	printf("구분: ");
	if(avg>=90){
		printf("수\n");
	} else if (avg>=80){
		printf("우\n");
	} else if (avg>=70){
		printf("미\n");
	} else if (avg>=60){
		printf("양\n");
	} else {
		printf("가\n");
	}
	
	
	//과목 우수 여부 - 어떤 과목이라도 95 이상이면 "과목우수" 아니면 "보통"
	printf("과목우수여부: ");
	if (edps>=95 || db >=95 || pg>=95){
		printf("과목우수\n");
	} else {
		printf("보통\n");
	}
	
	//참고사항 - 모든 과목이 90 이상이라면 "우수장학생" 아니면 "일반" 
	printf("참고사항: ");
	if (edps>=90 && db>=90 && pg>=90){
		printf("우수장학생\n");
	} else {
		printf("일반\n");
	}  
	
	/*등급: 10으로 나눈 몫으로 10 또는 9이면 1등급, 8이면 2등급,
			7이면 3등급, 나머지는 5등급 (switch~case~break 활용)*/ 
	int class = avg/10;
	printf("등급: ");
	switch (class){
		case 10:
		case 9:
			printf("1등급\n");
			break;
		case 8:
			printf("2등급\n");
			break;
		case 7:
			printf("3등급\n");
			break;
		default:
			printf("5등급\n");
	}


}
