#include <stdio.h>
void main(){ 
	//���� 
	//unsigned ��ȣ ���� ���� 
	short a = 32768; //-32768~32767 ���� ����� �����÷ο� �߻� 
	unsigned short b = 32768; //0~65535  ������ ���� �ʰ� ����� �Ἥ ǥ�� ���� �о��� 
	int c = 1004; //4byte 32bit 2�� 32�� -~+
	unsigned int d = 1005; //4byte
	long e = 300; //�ڹٿ����� 8byte������, c������ 4byte
	unsigned long f = 400; //4byte
	
	int age = 29; 
	printf("����� ���̴� : %d\n", age);
	
	printf("������ ���� : %d\n", a);
	printf("��ȣ ���� ������ ���� : %d\n", b);
	printf("�Ϲ� ���� : %d\n", c);
	printf("��ȣ ���� �Ϲ� ���� : %d\n", d);
	printf("������ ���� : %d\n", e);
	printf("��ȣ ���� ������ ���� : %d\n", f);
}

