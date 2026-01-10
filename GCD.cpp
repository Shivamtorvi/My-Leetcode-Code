#include<iostream>
using namespace std;
int gcd(int bigger,int smaller)
{
	while(smaller>0)
	{
		int rem=bigger%smaller;
		bigger=smaller;
		smaller=rem;
	}
	return bigger;
	
}
int main()
{
	int num1,num2,bigger,smaller;
	cout<<"enter two numbers:";
	cin>>num1>>num2;
	
	if(num1>num2)
	{
		bigger=num1;
		smaller=num2;
	}
	else
	{
		bigger=num2;
		smaller=num1;
	}
	
	int res=gcd(bigger,smaller);
	cout<<"gcd is:"<<res<<endl;
	
}