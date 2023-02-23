import java.util.*;

class ArrayX
{
	public int Arr[];

	public ArrayX(int iSize)
	{
		Arr = new int[iSize];
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
	public Marvellous(int iSize)
	{
		super(iSize);
	}

	public int Difference()
	{
		int iSum1 = 0,iSum2 = 0;

		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			if(Arr[iCnt] % 2 == 0)
			{
				iSum1 = iSum1 + Arr[iCnt];
				System.out.println("Sum of even elemnets is : "+iSum1);
			}
			else
			{
				iSum2 = iSum2 + Arr[iCnt];
				System.out.println("Sum of odd elements is : "+iSum2);
			}
		}
		return (iSum1-iSum2);
	}
}


class Assignment32_1
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter size of array :");
		int iSize = sobj.nextInt();

		Marvellous obj = new Marvellous(iSize);

		obj.Accept();
		obj.Display();

		int iRet = obj.Difference();
		System.out.println("Difference of all elements is : "+iRet);
	}
}