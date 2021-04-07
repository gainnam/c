/**
키보드로 입력받은 문자열 을 컴퓨터가 알아듣는 아스키코드로 변경 프로그램
**/
#include <stdio.h>
#include <string.h>

void main() {
	char buffer[80];
	char *p=buffer;//포인터변수 생성 및 크기지정
	int len, cnt = 0;//입력받은 문자열을 아슼티코드로 변경할 때 반복구문에 사용
	while(1) {
	printf("문자열을 입력하세요(종료하려면 Ctrl+C): ");
	scanf("%s", p);//키보드로 입력받아서 *p주소에 값을 저장합니다.
	len = strlen(p);//문자열의 길이를 구하기
	while(cnt<len) {//cnt 0 부터 비교기준인 len문자열의 길이값 전까지 출력
		
		printf("%d  ", *p);
		p++;//p어드레스인덱스주소는 커퓨터가 비어있는 메모리주소를 찾아서 부여
		cnt++;
	}
	printf("\n");
	cnt=0;
	//getchar();//입력버퍼 초기화(무한반복 시 기존내용 초기화)
	}
}