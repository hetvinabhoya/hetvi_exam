#include<iostream>
using namespace std;

fact(int a)
{
	if(a == 0)
	{
		return 1;
	}
	return a * fact(a - 1);
}

factorial(int a)
{
	int i;
	
	cout << "Factorial is : " << endl;
	
	for(i=0;i<=a;i++)
	{
		
		cout << fact(i) << endl;
	}
}

int main()
{
	int a;
	 
	cout << "Enter the value of A : ";
	cin >> a;
	
	factorial(a);
	
	return 0;
	
}
