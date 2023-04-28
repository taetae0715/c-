#include <stdio.h>
void main(){
	int n = 100; //변수의 선언
	int v = &n; //& 기호는 주소 연산자이므로 위에서 설정한 n의 주소를 전달함
	int *ptr = &n; //포인터 ptr의 선언: ptr은 주소를 저장하며 앞에 * 붙으면 해당 주소에 있는 데이터를 출력 
	int *pptr = &ptr;
	printf("n의 값: %d\n", n); //100 나오겠지 
	printf("v는 &n을 대입하였으므로 n의 주소: %#x\n", v); //메모리 주소는 16진수 %#x로 표시 
	printf("ptr은 &n을 대입하였으므로 n주소: %#x\n", ptr); 
	printf("*ptr은 ptr 주소에 있는 데이터의 값: %d\n", *ptr); 
	printf("pptr은 pptr의 주소: %#x\n", pptr); 
	printf("*pptr은 ptr의 주소: %#x\n", *pptr); 
	printf("\n"); 
	//포인터의 계산
	char* ptr_char = 0;
	int* ptr_int = NULL;
	double* ptr_double = 0x00; //16진수 
	printf("포인터 ptr_char가 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_char);
	printf("포인터 ptr_int가 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_int);
	printf("포인터 ptr_double가 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_double);
	
	printf("포인터 ptr_char가 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ++ptr_char);
	printf("포인터 ptr_int가 1 증가 후에 있는 주소값은 %#x입니다.\n", ++ptr_int);
	printf("포인터 ptr_double가 1 증가 후에 있는 주소값은 %#x입니다.\n", ++ptr_double);

	
}
