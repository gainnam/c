#include <stdio.h>
//#include <conio.h>
#include <string.h>

void main() {
	char buffer[80], *p = buffer;
	int len;//문자열의 길이를 저장하는 변수
	int cnt = 0;
	
	printf("문자열을 입력하세요: ");
	scanf("%s", p);//주소인덱스를 가지고있음
	len = strlen(p);
	printf("문자열의 길이는 %d 개 \n", len);
	printf("p변수의 인덱스 주소는 %d \n", p);
	while(*p) {
		p++;//== p=p+1변수에 주소인덱스값을 증가 *p변수에 공백이 나올 때까지 반복
		
	}
	printf("while을 거친 후 p변수의 인덱스 주소는 %d \n", p);
	printf("문자열을 역순으로 바꾸기: \n");
	while(cnt<len) {
		p--; //== p=p-1 인덱스 주소를 1씩 감소시키기
		printf("현재 인덱스 주소는 %d 그리고, 해당 인덱스 주소의 값은: ", p);
		putchar(*p);//현재 p인덱스 주소의 *p변수값을 1개씩 출력함수 putchar(1글자출력)
		printf("\n");
		cnt++;//cnt = cnt + 1
		}
	putchar("\n");
	printf("출력 한 이후의 인덱스 번호는 %d\n", p);//글자를 출력하지 않고, 엔터치는 효과 \newline
	getchar();//공백을 입력해서 버퍼내용 삭제
}