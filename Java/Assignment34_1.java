import java.util.*;

class ArrayX
{
	public int Arr[];
	public int iNo;

	public ArrayX(int iSize)
	{
		Arr = new int[iSize];
		int iNo = 0;
	}

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the elements :");
		for(int iCnt= 0;iCnt < Arr.length;iCnt++)
		{
			System.out.println("Enter the elemnets :"+(iCnt + 1));
			Arr[iCnt] = sobj.nextInt();
		}
	}

	public void Display()
	{
		System.out.println("Elements of array is :");

		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			System.out.println(Arr[iCnt] + "\t");
		}
		System.out.println();	
	}
}

class Marvellous extends ArrayX
{
	public Marvellous(int iSize,int iNo)
	{
		super(iSize);
	}

	public void Difference()
	{
		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			if(Arr[iCnt] % iNo == 0)
			{
				System.out.println("Sum of even elemnets is : "+Arr[iCnt]);
			}
		}
	}
}


class Assignment34_1
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter size of array :");
		int iSize = sobj.nextInt();

		System.out.println("Enter number to find in array:");
		int iNo = sobj.nextInt();

		Marvellous obj = new Marvellous(iSize,iNo);

		obj.Accept();
		obj.Display();

		obj.Difference();
	}
}