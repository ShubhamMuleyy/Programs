import java.util.*;

class ArrayX
{
	public void Accept(int Arr[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter "+Arr.length+"elements :");

		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			System.out.println("Enter the elements no :"+(iCnt + 1));
			
			Arr[iCnt] = sobj.nextInt();
			
		}
	}

	public void Display(int Arr[])
	{
		System.out.println("Enter "+Arr.length+"elements :");

		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			System.out.print(Arr[iCnt] + "\t");
		}
		System.out.println();
	}

	public void ArrayDemo(int Arr[])
	{
		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			if((Arr[iCnt] % 3) == 0 && (Arr[iCnt] % 5) == 0) 
			{
				System.out.print(Arr[iCnt] + "\t");
			}		
		}
		System.out.println();

	}
}


class Assignment34_4
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the size of array :");

		int iSize = sobj.nextInt();

		int Arr[] = new int[iSize];

		ArrayX aobj =  new ArrayX();

		aobj.Accept(Arr);
		aobj.Display(Arr);
		aobj.ArrayDemo(Arr);
	}
}