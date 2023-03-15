#include <stdio.h>
void main(){ 
	//% 출력하려면 %% 두 개 써야함
  	//나누기 형변환 주의 (float)
	int a = 50;
	int b = 90;
	int c = 80;
	int d = 70;
	printf("%d\n", a);
	//사칙연산 
	printf("a+b= %d\n", a+b); //%d에 해당하는 값 , 넣기!!! 
	printf("a-b= %d\n", a-b);
	printf("a*b= %d\n", a*b);
	printf("a/b= %f\n", (float) a/b); //나누기 형변환 : 연산 값 전에 (float) 넣기  
	printf("a%%b= %d\n\n", a%3); //나머지 연산자 %% 
	
	//증감식
	printf("후위 증가 a++ : %d\n", a++); 
	printf("전위 증가 ++b : %d\n", ++b); 
	printf("후위 감소 c-- : %d\n", c--); 
	printf("전위 증가 --d : %d\n", --d); 
	printf("%d\n", a);
	
	a=50, b=50;
	//대입 연산자(=, +=, -=, *=, /=, %=)
	a+=2; b-=2;
	printf("a+=2 -> a값에서 2를 더하여 대입한 결과 : %d\n", a); //a=52
	printf("b-=2 -> b값에서 2를 빼기하여 대입한 결과 : %d\n", b); //b=48
	
	a*=2; b/=2;
	printf("a*=2 -> a값에서 2음를 곱하여 대입한 결과 : %d\n", a); //a=104
	printf("b/=2 -> b값에서 2를 나누기하여 대입한 결과 : %d\n", b); //b=24
	
	c = a % b;
	printf("a%%b -> a를 b로 나눈 나머지의 결과 : %d\n", c); //c = 104%24 = 8이 남 
	
	 
}
