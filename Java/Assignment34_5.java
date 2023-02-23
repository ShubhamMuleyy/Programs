import java.util.*;

class ArrayX
{
	public int Arr[];
	
	ArrayX(int iSize)
	{
		Arr = new int[iSize];
	}

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
	
		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
	}

	public void Display()
    {
        System.out.println("Elements of array are : ");

        for(int iCnt =0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }

        System.out.println();
    }
}


class Number extends ArrayX
{
	public Number(int iSize)
	{
		super(iSize);
	}

	public int Product()
	{
		int iSum = 1;
		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			if(Arr[iCnt] % 2 != 0)
			{
				iSum = iSum * Arr[iCnt];
			}
		}
		return iSum;
	}
	

}


class Assignment34_5
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the size of an array :");
		int iSize = sobj.nextInt();

		Number aobj = new Number(iSize);

		aobj.Accept();
		aobj.Display();

		int iRet = aobj.Product();
		System.out.println("Sum of odd product is :"+iRet);
	}
}