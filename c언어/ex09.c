#include <stdio.h>
void main(){
	int i = 0;
	int sum= 0;
	//1���� 100���� �������� 3�� ����̰ų� 5�� ����� ���� ����Ͽ� ��� 
	while (i<100){
		i++;
		if(i % 3 == 0 || i % 3 == 0){
			sum+=i;
		}
	} printf("1���� 100���� �������� 3�� ����̰ų� 5�� ����� ��: %d\n", sum);
	
	//for�� if�� ����Ͽ� 1~100�� �ڼ� ��� 2, 3, 5, 7, 11, 13 ...  
	//0, 1, �ڽ��� �� �ǰ� 2�� ���� 
	int sw = 0;
	int n;
	int div;
	for(n=2; n<=100; n++){
		for(div=2; div<n; div++){
			if(n % div == 0) {
				sw = 1;
				break;
			}
		}	
		if(sw==0) {
		 printf("\n%d\n", n);
		}
		sw = 0;  
	}
	printf("\n");
	
	//do while ���� �ּ� 1�� ����
	int a=0; �ʱⰪ �ο� 
	do {
		����
		�ݺ����๮ 
	} while(����);
	
	
	
	
	}

	

