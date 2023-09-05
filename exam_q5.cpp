#include<iostream>
using namespace std;

class A{
	public:
		int a;

		set1()
		{
			cout << "Enter the value of A : ";
			cin >> a;
		}
};

class B : public A{
	public:
		int b;

		set2()
		{
			cout << "Enter the value of B : ";
			cin >> b;
		}
};

class C : public A{
	public:
		int c;

		set3()
		{
			cout << "Enter the value of C : ";
			cin >> c;
		}
};

class D : public B,public C{
	public:
		int d,Sum;

		set4()
		{
			cout << "Enter the value of D : ";
			cin >> d;

			Sum = C::a + b + c + d;

			cout << endl << "Sum of Numbers : " << Sum << endl;
		}
};

int main()
{
	D total;

	total.C::set1();
	total.set2();
	total.set3();
	total.set4();

	return 0;
}
