#include<iostream>
using namespace std;

class base1
{
	public:
	int i;
	float f;
	double d;

	void fun()
	{
		cout<<"Inside fun"<<"\n";
	}
	
	void gun()
	{
		cout<<"Inside gun"<<"\n";
	}

};

class derived : public base1
{
	public:
		int i;
		double d;

		void sun()
		{
			cout<<"Inside sun"<<"\n";
		}
};

class derivedX : public derived
{
	public:
		int k;

		void run();

};

int main()
{
	base1 bobj;
	derived dobj;
	derivedX dobj1;
	dobj.sun();

	dobj1.fun();

	return 0;
}