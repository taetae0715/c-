//ex20. ����ü�� ����ü
#include <stdio.h>
struct book { //����ü: �ڹ��� Ŭ������ ���� ���� ����� �ϳ��� �̸����� ����ȭ�� 
	char title[30];
	char author[30];
	int price;
};

typedef union{ //����ü: ���� ������� �ϳ��� �޸� ������ Ȱ���Ͽ� ����
	unsigned char a;
	unsigned int b;
	unsigned int c;
} SHAREDATA;

enum Weather {SUNNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30}; //������ 

void main(void){
	//����ü Ȱ��
	struct book my_book = {"HTML�� CSS", "ȫ�浿", 28000}; 
	struct book java_book = {.title = "Java language", .price = 30000}; 
	
	printf("ù ��° å�� ������ %s�̰�, ���ڴ� %s�̸�, ������ %d���Դϴ�.\n",
			my_book.title, my_book.author, my_book.price);
	
	printf("�� ��° å�� ������ %s�̰�, ���ڴ� %s�̸�, ������ %d���Դϴ�.\n",
			java_book.title, java_book.author, java_book.price);
			
	//����ü Ȱ��
	 SHAREDATA var;
	var.c = 0x12345678;
	printf("%#x\n", var.a);
	printf("%#x\n", var.b);
	printf("%#x\n", var.c);
	
	//������ Ȱ��
	 enum Weather wt;
	 wt = RAIN;
	 switch (wt){
	 	case SUNNY:
	 		puts("���� ����: ����");
	 		break;
	 	case CLOUD:
	 		puts("���� ����: �帲");
	 		break;
	 	case RAIN:
	 		puts("���� ����: ��");
	 		break;
	 	case SNOW:
	 		puts("���� ����: ��");
	 		break;
	 	default: puts("���� ���� ����");
	 } 
	puts("������ ����ü�� �ش��ϴ� �������� ������ �����ϴ�."); 
	printf("%d %d %d %d\n", SUNNY, CLOUD, RAIN, SNOW); 
}



