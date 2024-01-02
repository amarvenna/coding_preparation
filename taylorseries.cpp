#include<iostream>
using namespace std;

// taylor series using horner's rule

double e(int x, int n)
{
	double sum = 1,num = 1,den = 1;
	for(int i=1;i<=n;i++)
	{
		num = num*x;
		den = den*i;
		sum = sum+num/den;
	}
	return sum;
}
int main()
{
	cout<<e(1,10)<<endl;
	return 0;
}

