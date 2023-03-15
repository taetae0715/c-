#include <stdio.h>
void main(){
	//비교 연산자 (==, !=, >, >=, <, <=) 
	//0(false), 1(true)
	int a=30, b=35, c=33;
	printf("a==b : %d\n", (a==b));
	printf("a!=b : %d\n", (a!=b));
	printf("a>b : %d\n", (a>b));
	printf("a>=b : %d\n", (a>=b));
	printf("a<b : %d\n", (a<b));
	printf("a<=b : %d\n", (a<=b));
	printf("\n");
	//논리 연산자 (&&, ||, !) 
	printf("a>b && b<c : %d %d %d\n", a>b, b<c, (a>b && b<c)); 
	printf("a>b && b>c : %d %d %d\n", a>b, b>c, (a>b && b>c)); 
	printf("a<b && b<c : %d %d %d\n", a<b, b<c, (a<b && b<c)); 
	printf("a<b && b>c : %d %d %d\n", a<b, b>c, (a<b && b>c)); 
	printf("\n");
	printf("a>b || b<c : %d %d %d\n", a>b, b<c, (a>b || b<c)); 
	printf("a>b || b>c : %d %d %d\n", a>b, b>c, (a>b || b>c)); 
	printf("a<b || b<c : %d %d %d\n", a<b, b<c, (a<b || b<c)); 
	printf("a<b || b>c : %d %d %d\n", a<b, b>c, (a<b || b>c)); 
	printf("\n");
	printf("!(a>b) : %d\n", !(a>b));
	printf("!(b>c) : %d\n", !(b>c));
	printf("!(a>b || b>c) : %d %d %d\n", a>b, b>c, !(a>b || b>c));
}
