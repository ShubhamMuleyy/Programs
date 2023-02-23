#include<iostream>
using namespace std;

class Array
{
	public:
		int iSize;
		int *Arr;

		Array(int iLength)
		{
			iSize = iLength;
			Arr = new int[iSize];

		}

		Array()
		{
			delete []Arr;
		}

		void Accept()
		{
			int i = 0;

			for(i = 0;i < iSize;i++)
			{
				cin>>Arr[i];
			}
		}

		void Display()
		{
			int i = 0;

			for(i = 0;i < iSize;i++)
			{
				cout<<Arr[i];
			}
		}

		int Summation()
		{
			int iSum = 0,i = 0;
	
			for(i = 0;i < iSize ;i++)
			{
				iSum = iSum + Arr[i];
			}
			return iSum;
		}

};



int main()
{
	int iRet = 0;

	Array obj1(4);

	obj1.Accept();
	obj1.Display();

	iRet = obj1.Summation();

	cout<<"Summation is :"<<iRet<<"\n";

	return 0;

	

}