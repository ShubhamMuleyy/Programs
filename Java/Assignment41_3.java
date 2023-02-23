import java.util.*;


class MyArray
{
	public int SumEven(int Arr[])
	{
		int iSum = 0;
		System.out.println("Output of array 1 st is :");
		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			if(Arr[iCnt] % 2 == 0)
			{
				iSum = iSum + Arr[iCnt];
			}
		}
		return iSum;
	}
		
	public int SumOdd(int Brr[])
	{
		int iSum1 = 0;
		System.out.println("Output of array 2 nd is :");
		for(int iCnt1 = 0;iCnt1 < Brr.length;iCnt1++)
		{
			if(Brr[iCnt1] % 2 != 0)
			{
				iSum1 = iSum1 + Brr[iCnt1];
			}
		}
		return iSum1;
	}
}




class Assignment41_3
{
	public static void main(String aa[])
	{
	Scanner sobj = new Scanner(System.in);

	System.out.println("Enter the size of array :");
	int iSize = sobj.nextInt();

	 int Arr[] = new int[iSize];
	 int Brr[] = new int[iSize];

	for(int iCnt = 0;iCnt < Arr.length;iCnt++)
	{
		System.out.println("Enter the first array :"+(iCnt+1));
		Arr[iCnt] = sobj.nextInt();
	}

	for(int iCnt1 = 0;iCnt1 < Brr.length;iCnt1++)
	{
		System.out.println("Enter the second array :"+(iCnt1+1));
		Brr[iCnt1] = sobj.nextInt();
	}

	MyArray obj = new MyArray();

	int iRet = obj.SumEven(Arr);
	System.out.println(iRet);
	
	int iRet1 = obj.SumOdd(Brr);
	System.out.println(iRet1);

	}
}
