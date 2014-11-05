#include<stdio.h>

int countCycles(int n){
	int cycleCount = 1;
	while (n > 1) {
		cycleCount++;
		if(n % 2 == 1){
			n = (n * 3) + 1;
		}else{
			n /= 2;
		}
	}
	return cycleCount;
}

int maxBetween(int start, int end){
	int highestCycleCount = 0;	
	for(int i = start; i <= end; i++){
		int cycles = countCycles(i);
		if(cycles > highestCycleCount){
			highestCycleCount = cycles;
		}
	}
	return highestCycleCount;
}

int main() { 
	int firstNum, secondNum, highestCycleCount;	
	while (scanf("%d %d",&firstNum,&secondNum) !=EOF) {

		if(firstNum < secondNum){
			highestCycleCount = maxBetween(firstNum, secondNum);
		}else{
			highestCycleCount = maxBetween(secondNum, firstNum);		
		}
		printf("%d %d %d\n", firstNum, secondNum, highestCycleCount);
	}
}