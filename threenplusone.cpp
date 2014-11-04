#include <iostream>
using namespace std;

//Start with an integer n. If n is even, divide by 2. If n is odd, multiply by 3 and add 1. Repeat this process with the new value of n, terminating when n = 1.

int countCycles(int n){
	int cycleCount = 1;
	//cout << "nums for " << n << " ";
	while (n > 1) {
		cycleCount++;
		if(n % 2 == 1){
			n = (n * 3) + 1;
		}else{
			n = n / 2;
		}
		//cout << n << " ";
	}
	return cycleCount;
}

int main()
{
	int firstNum, secondNum, highestCycleCount;	
	cout << "Enter two numbers: ";
	cin >> firstNum >> secondNum;

	cout << firstNum << " " << secondNum << " ";
	//cout << "First " << firstNum << endl;
	//cout << "Second " << secondNum << endl;
	highestCycleCount = 0;	
	for(int i = firstNum; i <= secondNum; i++){
		int cycles = countCycles(i);
		if(cycles > highestCycleCount){
			highestCycleCount = cycles;
		}
		//cout << "Cycles: " << cycles << endl;
		//totalCycles += cycles;
	}
	
	cout << highestCycleCount << endl;

	//cout << countCycles(firstNum) << endl;
	//cout << countCycles(secondNum) << endl;
	return 0;
}
