#include <stdio.h>
void main(){
	//이스케이프 문자//
/*	1. \' : 작은 따옴표 
	2. \" : 큰 따옴표
*	3. \? : 물음표  
	4. \\ : 역슬래시 
*	5. \a : 경고음 출력
	6. \n : 줄 바꿈
	7. \t : 수평 tap 간격
	8. \b : 백스페이스
	9. \r : 캐리지 리턴 (맨 첫번째로 오는 것)
	10. \f : 폼 피드 (화면 스크롤) 
*	11. /v : 수직 tap 간격	 */

	//서식 지정자//
/*	1. %c : 문자	 
	2. %s : 문자 배열	 
	3. %d, %i : 부호 있는 10진수 정수
	4. %u : 부호 없는 10진수 정수  
	5. %f, %lf : 실수
	6. %o : 8진수 
	7. %x : 16진수 
	8. %e, %E, %g, %G : 지수 10의 6승 -> e+06
	9. %% : 백분율 기호  	*/	 
	
	int kor, eng, mat, tot;
	float avg = 0.0f;
	printf("국어 점수 : ");
	scanf("%d", &kor); //& 기억 장소 주소를 뜻함  
	printf("영어  점수 : ");
	scanf("%d", &eng); //& 기억 장소 주소를 뜻함  
	printf("수학  점수 : ");
	scanf("%d", &mat); //& 기억 장소 주소를 뜻함  
	tot = kor + eng + mat;
	avg = tot / 3.0f;
	
	printf("번호\t국어\t영어\t수학\t총점\t평균\n");
	printf("07\t%3d\t%3d\t%3d\t%d\t%.3f\n", kor, eng, mat, tot, avg); //값 매칭 까먹지 말것 
	
	
}
