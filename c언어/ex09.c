#include <stdio.h>
void main(){
	int i = 0;
	int sum= 0;
	//1부터 100까지 범위에서 3의 배수이거나 5의 배수인 합을 계산하여 출력 
	while (i<100){
		i++;
		if(i % 3 == 0 || i % 3 == 0){
			sum+=i;
		}
	} printf("1부터 100까지 범위에서 3의 배수이거나 5의 배수인 합: %d\n", sum);
	
	//for과 if를 사용하여 1~100의 솟수 출력 2, 3, 5, 7, 11, 13 ...  
	//0, 1, 자신은 안 되고 2로 시작 
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
	
	//do while 문장 최소 1번 실행
	int a=0; 초기값 부여 
	do {
		증감
		반복실행문 
	} while(조건);
	
	
	
	
	}

	

