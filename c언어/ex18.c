//ex18. �迭�� ������ 
#include <stdio.h>
void main(){
	int i, arr_len;
	int num01=90, num02=70, num03=80;
	int* arr[3]={&num01, &num02, &num03}; //int�� ������ �迭 ���� 

	arr_len = sizeof(arr)/sizeof(arr[0]);
	printf("�ּ�\t\t���尪\n");
	
	for (i=0; i<arr_len; i++){
		printf("%#x \t %d \n", arr[i], *arr[i]);
	}
	printf("\n");
}
