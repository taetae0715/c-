//ex15. 1���� �迭 
//�ڹ� length�� ����� �� 
//sizeof �޸� �ּҸ� ����ϰ� ��� -> (��ü ������ / []�ϳ� ������) +1
#include <stdio.h>
void main(){
	int i;
	int sum = 0;				  //int score[3] ���� score��� ���� �ȿ� 0~3���� 4���� ���� �ְڴ�! 
	int score[3] = {85, 70, 88}; //score[0], score[1], score[2] 3�� ���� �� �ʱ�ȭ 
	score[3] = 99;				//score[3]�� �������� �ʰ� �߰��� �ʱ�ȭ ���� 
	for (i=0; i<4; i++){		//score[3]�� ���Ŀ� ���ԵǾ 4���� ���� ������ i<4 
		sum+= score[i];			//i�� 4���� �����ϱ� 0~3���� sum�� ���� -> 85, 70, 88, 99 
	}
	int arr_len = sizeof(score) / sizeof(score[0]) +1; //�迭�� ���̴� ���ϴ� ���� 
	printf("�迭 score�� ���̴� %d�� �Դϴ�.\n", arr_len);
	printf("���� ������ �հ��  %d���̰�, ��� ������ %.2f���Դϴ�.\n", sum, (double)sum/arr_len);
}
