#include <stdio.h>
//함수 정의 위치는 void main 위아래 상관없음
//함수의 종류 4가지: 매개변수와 반환값의 유무나 개수에 따라 나뉨 * java 람다식 

//1. 매개변수도 없고, 반환값도 없는 경우
void fn1(){
	printf("매개변수도 없고, 반환값도 없는 경우 - 함수1\n");
} 
//2. 매개변수는 있으나, 반환값이 없는 경우
void fn2(int a){
	printf("전달한 값: %d, 제곱 결과: %d\n", a, a*a);
}
//3. 매개변수는 없으나, 반환값이 있는 경우
int fn3(){
	int a = 1004;
	return a/2;
}
//4. 매개변수와 반환값이 모두 존재하는 경우 
float fn4(int su1, int su2, float pi){
	return su1*su2/pi;
}  

void main(){
	fn1();
	fn2(8); //2번 a에 8이 들어감 
	int a = fn3(); //return 하면 받을 곳이 필요하고, 위에 a와는 다른 지역변수 a 
	printf("반환값이 있는 데이터: %d\n", a); //return했기 때문에 호출함수 밖에서 출력
	float b = fn4(32, 27, 3.14); 
	printf("전달한 값: %d %d, 받은 결과값: %f\n", 30, 20, b); 
	//여기 또한 위에서 return했기 때문에 호출함수 밖에서 출력
	
}

