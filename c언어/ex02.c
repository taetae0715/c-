#include <stdio.h>
void main(){ 
	//실수 (부동 소수점수) 
	//아주 큰 수나 아주 작은 수에 적합
	//부호, 지수, 가수 등으로 이루어짐
	float a = 3.14159272; //4byte : 지수 8bit, 가수 23bit 
	double b = 274.123456789; //8byte : 지수 11bit, 가수 ?bit 
	long double c = a + b;  //8byte 형변환 안 해서 기본값 0 나올 예정 
	char d = 'a'; //1byte
	unsigned char e = 'b'; //2byte 
	//String은 없음!! 사용하고 싶으면 별도의 처리 필요함  
	
	printf("a=%.20f\n", a);
	printf("b=%.20f\n", b);
	printf("c=%lf\n", c); //자바에는 없는 long double 타입 길게 표현 
	printf("d=%c\n", d);
	printf("e=%c\n", e);
}
