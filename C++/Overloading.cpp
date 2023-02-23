#include<iostream>

using namespace std;

class Overloading
{
	public :
		int Add(int a,int b)
		{
			cout<<"Addition of 2 integer\n";
			return a+ b;
		}

		float Add(float a,float b)
		{
			cout<<"Addition of floats\n";
			return a+ b;
		}

		double Add(double a,double b)
		{
			cout << "Addition of doubles\n";
			return a+ b;
		}

		int Add(int a,int b,int c)
		{
			cout<<"Addition of 3 integer\n";
			return a+ b+ c;
		}

		
			
};

int main()
{
	Overloading obj;
	int i;
	float f;
	double d;

	i = obj.Add(11,21);
	cout << i <<"\n";
	i = obj.Add(11,21,51);
	cout << i <<"\n";
	d = obj.Add(22.22,33.33);	
	cout << d <<"\n";
	f = obj.Add(22.22f,33.33f);
	cout << f <<"\n";

	return 0;
}