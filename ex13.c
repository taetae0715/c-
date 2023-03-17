//ex13. 변수의 유효 범위 (scope-스코프) 
//전역변수, 지역변수, 매개변수 
#include <stdio.h>
void main(){
	int i = 7;
	int var = 10;
	printf("main()함수 내의 전역 변수 var의 값은 %d입니다.\n", var);
	if (i < 10){
		local();
		int var = 50;
		printf("if 문 내의 지역 변수 var의 값은 %d입니다.\n", var);
	}
	printf("현재 지역 변수 var의 값은 %d입니다.\n", var); 
}
void local(void){
	int var = 25;
	printf("local() 함수 내의 지역 변수  var의 값은 %d입니다.\n", var); 
}	
	

