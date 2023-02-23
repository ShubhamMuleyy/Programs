import java.util.*;

class ArrayX
{
	protected int Arr[];

	public ArrayX(int iSize)
	{
		Arr = new int[iSize];
	}

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter "+Arr.length+"elements :");

		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			System.out.println("Enter the elements no :"+(iCnt + 1));
			
			Arr[iCnt] = sobj.nextInt();
			
		}
	}

	public void Display()
	{
		System.out.println("Enter "+Arr.length+"elements :");

		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			System.out.print(Arr[iCnt] + "\t");
		}
		System.out.println();
	}

	public void ArrayDemo()
	{
		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			if((Arr[iCnt] % 2) == 0 && (Arr[iCnt] % 5) == 0) 
			{
				System.out.print(Arr[iCnt] + "\t");
			}		
		}
		System.out.println();

	}
}
/*
class ArrayDemo extends ArrayX
{
	public ArrayDemo(int iSize)
	{
		super(iSize);
	}

	public void Display()
	{
		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			if(Arr[iCnt] % 5 == 0)
			{
				System.out.println(Arr[iCnt]);
			}
		}
	}
}
*/

class Assignment32_3
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the size of array :");

		int iSize = sobj.nextInt();

		ArrayX aobj =  new ArrayX(iSize);

		aobj.Accept();
		aobj.Display();
		aobj.ArrayDemo();
	}
}