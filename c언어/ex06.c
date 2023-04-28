#include <stdio.h>
void main(){
	//비트 연산 (&, |, ^, ~, >>나누기, <<곱하기) 
	// ~ complement: 보수(보충하는 수)를 구해서 뺄셈 연산,, 사람은 9의 보수를 취하고 컴터는 2의 보수를 취한다,, 
	// a가 20이라면 ~a는 21이다 따라서 반대편의 수를 보수라고 한다 
	int a = 20, b = 30;
//	16	8	4	2	1 	
//	1	0	1	0	0	a: 20 2진수 10100 
//	1	1	1	1	0	b: 30 2진수 11110 

//	1	0	1	0	0	&: 20 둘 다 1이어야 1 
//	1	1	1	1	0	|: 30 둘 중 하나라도 1이면 1 
//	0	1	0	1	0	^: xor 둘 다 1이면 0, 하나만 1이면 1 
//	0	1	0	1	1	~: a의 보수 
//	0	0	0	0	1	~: b의 보수 

	printf("a&b : %d\n", a&b); //&and 20 
	printf("a|b : %d\n", a|b); //|or 30
	printf("a^b : %d\n", a^b); //^xor 10
	printf("~a : %d\n", ~a);  //~complement -21
	printf("~b : %d\n", ~b); //~complement -31
	printf("a>>2 : %d\n", a>>2); //>>나누기 right shift 5
	printf("a<<2 : %d\n", a<<2); //<<곱하기 left shift 80 

	//기타 연산 
	int rank = a>b ? 1 : 2; //삼항 연산자 a가 b보다 크면 rank 값에 1이 들어가고, 아니면 2가 들어감
	int c=50, d=60; //쉼표 연산자
	printf("a>b ? 1 : 2 => %d\n", rank); //삼항 연산의 결과 

}
