//ex13. ������ ��ȿ ���� (scope-������) 
//��������, ��������, �Ű����� 
#include <stdio.h>
void main(){
	int i = 7;
	int var = 10;
	printf("main()�Լ� ���� ���� ���� var�� ���� %d�Դϴ�.\n", var);
	if (i < 10){
		local();
		int var = 50;
		printf("if �� ���� ���� ���� var�� ���� %d�Դϴ�.\n", var);
	}
	printf("���� ���� ���� var�� ���� %d�Դϴ�.\n", var); 
}
void local(void){
	int var = 25;
	printf("local() �Լ� ���� ���� ����  var�� ���� %d�Դϴ�.\n", var); 
}	
	

