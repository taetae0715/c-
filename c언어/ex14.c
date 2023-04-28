//ec14. 재귀함수(self recursive): 자기 자신을 계속 호출하는 함수 
#include <stdio.h>
void main(){
	int a;
	printf("합계를 구할 숫자 입력: ");
	scanf("%d", &a); //scanf 로 숫자 입력 받음 
	printf("결과: %d", rSum(a)); //입력 받은  숫자 a 출력, 밑에 함수랑 엮을 변수 rSum
}
int rSum(int n){		//n이 1이면 그냥 1을 반환해서 재귀 종료 (a=n매개변수) 
	if (n == 1) {
		return 1;
	}
	return n + rSum(n-1);
	//n이 1이 아니면, n을 1부터 (n-1)까지의 합과 더한 값을 반환함 
	//a에 10을 넣었으면 10, 9, 8, 7, 6, 5, 4, 3, 2 계속 대입해서 누적값을 더하다가 1이 되면 반환해서 결과 보여줌 
}
