//ex19. 문자열과 처리 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
void main(){
	char str[100];
	//여기부터는 <string.h> 필요 
	fputs("문자열을 입력해 주세요: \n", stdout); //파일 또는 모니터로 데이터 출력
	fgets(str, sizeof(str), stdin); //파일 또는 키보드로 데이터 입력
	puts("입력하신 문자열: "); //모니터로 출력 
	puts(str);
	
	// stdin: 표준 입력인 키보드로,  stdout: 표준 출력인 모니터로
	
	 












}

