#include <stdio.h>
void main(){

	//1. 1~100 소수 구하기
	int sw = 0;
	int n, div;
	for(n=2; n<=100; n++){ 	//0, 1, 자신은 안 되고 2로 시작
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


	//2. 최소공배수, 최대공약수 구하기 
	int n1, n2, i; //입력받는 수1, 수2, 카운트변수
	int lcm; //최소공배수 선언 
	int gcd; //최대공약수 선언 
	scanf("%d %d", &n1, &n2); //두 수 입력 받는 문장
	
	for(i=1; i<=n1 && i<=n2; i++){ //카운트를 두 정수보다 작거나 같을 때까지 반복 
		if(n1 % i == 0 && n2 % i == 0){ //두 정수를 현재 카운트 값으로 나누어 떨어질 때까지 반복 
			gcd = i; //두 정수보다 작거나 같을 때까지 공약수를 계속 대입 * 공약수 gcd 구함 
		}
	}
	lcm = (n1 * n2) / gcd; //두 수의 곲을 공약수로 나누면 최소공배수 구할 수 있음 
	printf("최대 공약수: %d\n", gcd);	
	printf("최대 공배수: %d\n", lcm);	


	//3. 구구단 
	int g, j;
	for(g=1; g<=9; g++){
		for(j=2; j<=9; j++){
			printf("%d*%d=%d\t", j, g, (j*g));
		}
		printf("\n");
	}
	
	
	
	
	
}
