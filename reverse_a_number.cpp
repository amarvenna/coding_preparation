#include<iostream>
#include<stdio.h>

using namespace std;

int reverse_num(int n){
	int reverse,lastDigit;
	reverse = 0;
	while(n>0){
	lastDigit = n%10;
	reverse = reverse*10 + lastDigit;
	n /= 10;
        }
	return reverse;
}
int main(){
        int b;
	b=reverse_num(123);
        cout<<b<<endl;

	return 0;
}

