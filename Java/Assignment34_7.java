import java.util.*;

class ArrayX
{
	public int Arr[];
	public int iNo;
	
	ArrayX(int iSize,int iNo)
	{
		Arr = new int[iSize];
		A = iNo;
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
	public Number(int iSize,int iNo)
	{
		super(iSize);
		super(iNo);
	}

	public int Product()
	{
		int iSum = 1;
		int iCnt = 0;
		for( iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			if(Arr[iCnt] == iNo)
			{
				break;
			}
		}
		return iCnt;
	}
	

}


class Assignment34_7
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the size of an array :");
		int iSize = sobj.nextInt();

		System.out.println("ENter the number :");
		int iNo = sobj.nextInt();

		Number aobj = new Number(iSize,iNo);

		aobj.Accept();
		aobj.Display();

		int iRet = aobj.Product();
		System.out.println("Sum of odd product is :"+iRet);
	}
}
