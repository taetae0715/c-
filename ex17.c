#include <stdio.h>
void main(){
	int n = 100; //������ ����
	int v = &n; //& ��ȣ�� �ּ� �������̹Ƿ� ������ ������ n�� �ּҸ� ������
	int *ptr = &n; //������ ptr�� ����: ptr�� �ּҸ� �����ϸ� �տ� * ������ �ش� �ּҿ� �ִ� �����͸� ��� 
	int *pptr = &ptr;
	printf("n�� ��: %d\n", n); //100 �������� 
	printf("v�� &n�� �����Ͽ����Ƿ� n�� �ּ�: %#x\n", v); //�޸� �ּҴ� 16���� %#x�� ǥ�� 
	printf("ptr�� &n�� �����Ͽ����Ƿ� n�ּ�: %#x\n", ptr); 
	printf("*ptr�� ptr �ּҿ� �ִ� �������� ��: %d\n", *ptr); 
	printf("pptr�� pptr�� �ּ�: %#x\n", pptr); 
	printf("*pptr�� ptr�� �ּ�: %#x\n", *pptr); 
	printf("\n"); 
	//�������� ���
	char* ptr_char = 0;
	int* ptr_int = NULL;
	double* ptr_double = 0x00; //16���� 
	printf("������ ptr_char�� ���� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_char);
	printf("������ ptr_int�� ���� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_int);
	printf("������ ptr_double�� ���� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_double);
	
	printf("������ ptr_char�� 1 ���� �Ŀ� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ++ptr_char);
	printf("������ ptr_int�� 1 ���� �Ŀ� �ִ� �ּҰ��� %#x�Դϴ�.\n", ++ptr_int);
	printf("������ ptr_double�� 1 ���� �Ŀ� �ִ� �ּҰ��� %#x�Դϴ�.\n", ++ptr_double);

	
}
