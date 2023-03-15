#include <stdio.h>
void main(){ 
	//정수 
	//unsigned 부호 없는 정수 
	short a = 32768; //-32768~32767 범위 벗어나서 오버플로우 발생 
	unsigned short b = 32768; //0~65535  음수는 쓰지 않고 양수만 써서 표현 범위 넓어짐 
	int c = 1004; //4byte 32bit 2의 32승 -~+
	unsigned int d = 1005; //4byte
	long e = 300; //자바에서는 8byte이지만, c에서는 4byte
	unsigned long f = 400; //4byte
	
	int age = 29; 
	printf("당신의 나이는 : %d\n", age);
	
	printf("단정도 정수 : %d\n", a);
	printf("부호 없는 단정도 정수 : %d\n", b);
	printf("일반 정수 : %d\n", c);
	printf("부호 없는 일반 정수 : %d\n", d);
	printf("배정도 정수 : %d\n", e);
	printf("부호 없는 배정도 정수 : %d\n", f);
}

