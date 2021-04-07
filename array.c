#include <stdio.h>
void main() {
	int score[5];//배열의 크기지정 공간 5개
	int sum=0, cnt;;//변수 선언하면서 초기값 지정.
	for(cnt=0;cnt<5;cnt++) {
		printf("입력(점수 %d)=>", cnt+1);
		scanf("%d", &score[cnt]);
	}
	for(cnt=0;cnt<5;cnt++) {
		sum += score[cnt];// sum + score[cnt];
	}
	printf("총점=%d, 평균=%d \n", sum,sum/cnt);
}