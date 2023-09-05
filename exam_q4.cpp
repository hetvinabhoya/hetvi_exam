#include<iostream>
using namespace std;

class A{
	public:
		int m,n;
		void set1()
		{
			cout << "Enter value of M : ";
			cin >> m;
			cout << "Enter value of N : ";
			cin >> n;
		}
};

class B : public A{
	public:
		int Multiplication;
		void setData()
		{
			Multiplication = m * n;
			
			cout << "Multiplication : " << Multiplication << endl;
		}
		
};

class C : public B{
	public:
		int Division;
		void setData()
		{
			Division = m / n;
			
			cout << "Division : " << Division << endl;
			
		}
};

int main()
{
	C a;
	
	a.set1();
	a.B::setData();
	a.setData();
	
	return 0;
	
}

