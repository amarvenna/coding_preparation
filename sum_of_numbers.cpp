#include<iostream>
#include<stdio.h>

using namespace std;

int sumOfDigits(int n){
	int sum = 0;
	while(n>0){
		int lastDigit = n%10;
		sum = sum + lastDigit;
		n /= 10;
	}
	return sum;
}
int main(){
	int a = sumOfDigits(1234);
	cout<<a<<endl;
}
