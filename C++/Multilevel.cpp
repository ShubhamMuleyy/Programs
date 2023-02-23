#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;

        Base()
        {
            cout<<"Inside Base constructor\n";
        }
        ~Base()
        {
            cout<<"Inside Base destructor\n";
        }
        void fun()
        {
            cout<<"Inside Base fun\n";
        }
};

class Derived : public Base
{   
    public:
        int X,Y;
        
        Derived()
        {
            cout<<"Inside derived constructor\n";
        }
        ~Derived()
        {
            cout<<"Inside derived destrcutor\n";
        }
        void gun()
        {
            cout<<"Inside gun of Derived\n";
        }
};

class DerivedX : public Derived
{
	public:
		int i,j;

		DerivedX()
		{
			cout<<"Inside DerivedX constructor\n";

		}
		~DerivedX()
		{
			cout<<"Inside DerivedX destructor\n";

		}
};

int main()
{
   	cout<<"Size of base : "<<sizeof(Base)<<"\n";
	cout<<"Size of Derived : "<<sizeof(Derived)<<"\n";
	cout<<"Size of DerivedX : "<<sizeof(DerivedX)<<"\n";

	DerivedX dobj;

    
    dobj. gun();
    dobj. fun();
    return 0;
}