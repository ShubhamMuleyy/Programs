#include<iostream>
using namespace std;


class Base
{
	public:
		int i;
		int j;

		Base()
		{
			cout<<"Inside Base constructor"<<"\n";
		}

		~Base()
		{
			cout<<"Inside Base destructor"<<"\n";
		}

		void fun()
		{
			cout<<"Inside fun"<<"\n";
		}

};

class Derived: public Base
{
	public:
		int x,y;

		Derived()
		{
			cout<<"Inside derived constructor"<<"\n";
		}

		~Derived()
		{
			cout<<"Inside derived destructor"<<"\n";

		}

		void gun()
		{
			cout<<"Inside gun"<<"\n";
		}

};

int main()
{
	Derived *ptr = NULL;

	ptr = new Derived;

	ptr -> gun();
	ptr -> fun();

	delete ptr;

}