#include <stdio.h>
void main(){
	int a = 0b110101;	//2����(Binary) ���� 
	int b = 0572;		//8����(Otal) ���� 
	int c = 0x3e6;		//16����(heXimal) ���� 
	int d = 365;		//10����(Decimal)���� 
	
	printf("2���� 0b110101 -> %d\n", a);
	printf("8���� 0572 -> %d\n", b);
	printf("16���� 0x3e6 -> %d\n", c);
	printf("10���� 365 -> %d\n\n", d);
	
	printf("10���� 365�� 8������ ��� : %#o\n", d); // %#o 8���� ���� 
	printf("10���� 365�� 16������ ��� : %#x\n", d); // %#x 16���� ���� 
	 
}
