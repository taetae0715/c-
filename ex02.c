#include <stdio.h>
void main(){ 
	//�Ǽ� (�ε� �Ҽ�����) 
	//���� ū ���� ���� ���� ���� ����
	//��ȣ, ����, ���� ������ �̷����
	float a = 3.14159272; //4byte : ���� 8bit, ���� 23bit 
	double b = 274.123456789; //8byte : ���� 11bit, ���� ?bit 
	long double c = a + b;  //8byte ����ȯ �� �ؼ� �⺻�� 0 ���� ���� 
	char d = 'a'; //1byte
	unsigned char e = 'b'; //2byte 
	//String�� ����!! ����ϰ� ������ ������ ó�� �ʿ���  
	
	printf("a=%.20f\n", a);
	printf("b=%.20f\n", b);
	printf("c=%lf\n", c); //�ڹٿ��� ���� long double Ÿ�� ��� ǥ�� 
	printf("d=%c\n", d);
	printf("e=%c\n", e);
}
