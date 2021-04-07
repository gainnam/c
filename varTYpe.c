#include<stdio.h>
#define AGE28
#define Pl 3.141592
#define NAME"홍길동"

const int a = 10;
const float b = 10.56789;
const char c='K';
const char *OPEN ="오픈소스그룹";
	
void main() {
	int i = 28; float j = 4.0 k = 'A';
	char ch[10] = "홍길동";//char 배열문자
	char *p = "프로그래머";//char* 포인터변수
	
	printf("기관은: %s\n 이름은: %s\n 나이는: %d\n",OPEN,NAME,AGE);
	printf("----------------------------------------------------\n");
	printf("%s %s\n 나이: %d\n 직급:%c\n 평점:%f\n"  ch, p, i, k, j);
}