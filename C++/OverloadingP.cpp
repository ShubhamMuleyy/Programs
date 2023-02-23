#include<iostream>
using namespace std;

class Overloading
{
	public:
		
		int Add(int a,int b)
		{
			cout<<"Addition of 2 integers\n";
			return a+b;
		}

		float Add(float a ,float b)
		{
			cout<<"Addition of floats\n";
			return a+b;

		}

		int Fun(int a,float b)
		{
			cout<<"Substraction of 2 integers\n";
			return a-b;
		}
};

int main()
{
	Overloading obj;
	int i = 0;
	
	i = obj.Add(11,12);

	cout<<"Addition is :"<<i<<"\n";

	i = obj.Fun(21,11);

	cout<<"Addition is :"<<i;

	return 0;
}