#include <stdio.h>

void main() {
	int a,b,c,d;
	a=30, b=20;
	c = a+b;
	printf("c=%d", c);//결과 c=50;
	d = a>5 ||  b < 10; // 1 ||(+) 0 = 1(true), &&(x곱셈) 0 = 0(false)
	//논리연산: true/false사용 and연산(&&곱연산) ,or연산(||덧셈연산), not연산(반대연산)
	printf("d=%d\n", d); //결과 d=0, 1(전원On), 0(전원Off)
	//관계연산 <> 대소관계를 비교
	if(a>b) {
		printf("a는 b보다 크다");
	} else {
		print("a는 b보다 작거나 같다");
	}
}