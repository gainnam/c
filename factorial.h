/* factorial */
#define ONE 1
int factorial(int n) {
	if(n>ONE) {
		return(n*factorial(n-1));
	}else{
		//n-1 반복되다가 n이 1이되었을 경우에 1을 반환
		return(ONE);
	}
}