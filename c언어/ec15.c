//ex15. 1차원 배열 
//자바 length랑 비슷한 애 
//sizeof 메모리 주소를 기억하고 출력 -> (전체 사이즈 / []하나 사이즈) +1
#include <stdio.h>
void main(){
	int i;
	int sum = 0;				  //int score[3] 뜻은 score라는 변수 안에 0~3까지 4개의 값을 넣겠다! 
	int score[3] = {85, 70, 88}; //score[0], score[1], score[2] 3개 선언 및 초기화 
	score[3] = 99;				//score[3]을 선언하지 않고 추가로 초기화 가능 
	for (i=0; i<4; i++){		//score[3]도 수식에 포함되어서 4개의 값이 있으니 i<4 
		sum+= score[i];			//i는 4보다 작으니까 0~3까지 sum에 대입 -> 85, 70, 88, 99 
	}
	int arr_len = sizeof(score) / sizeof(score[0]) +1; //배열의 길이는 구하는 공식 
	printf("배열 score의 길이는 %d개 입니다.\n", arr_len);
	printf("과목 총점수 합계는  %d점이고, 평균 점수는 %.2f점입니다.\n", sum, (double)sum/arr_len);
}
