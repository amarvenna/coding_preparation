#include<iostream>
#include<stdio.h>

using namespace std;

bool isPalindrome(int n){
	int reverseNum=0;
	int temp = n;
	while(temp>0){
		int lastDigit = temp%10;
		reverseNum = reverseNum*10 + lastDigit;
		temp /= 10;
	}
	return (reverseNum == n);
}
int main(){
	int x;
	cout<<"enter a number"<<endl;
	cin>>x;
	int y = isPalindrome(x);
	if(y==0)
		cout<<"notPalindrome"<<endl;
	else
		cout<<"palindrome"<<endl;
	return 0;
}
