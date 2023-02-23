#include<iostream>
using namespace std;

namespace
{
	class Demo
	{
		public:
			int i,j;
			void fun()
			{
				cout<<"Inside fun of Demo from Unnamed\n";

			}
	};

	class Hello
	{
		public:
			int x,y;

	};
}



int main()
{
	Demo obj;

	obj.fun();
	
	return 0;
}