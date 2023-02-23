import java.util.*;


class MyArray
{
	public int DiffArray(int Arr[],int iSize1,int Brr[],int iSize2)
	{
		int iSum = 0,iSum1 = 0;
		System.out.println("Output of array 1 st is :");
		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			iSum = iSum + Arr[iCnt];
		}
		System.out.println("Output of array 2 nd is :");
		for(int iCnt1 = 0;iCnt1 < Brr.length;iCnt1++)
		{	
			iSum1 = iSum1 + Brr[iCnt1];
		}
		return(iSum1 - iSum);
	}
		
}


class Assignment42_6
{
	public static void main(String aa[])
	{
	Scanner sobj = new Scanner(System.in);

	System.out.println("Enter the size of array :");
	int iSize1 = sobj.nextInt();

	 int Arr[] = new int[iSize1];

	System.out.println("Enter the size of array :");
	int iSize2 = sobj.nextInt();

	 int Brr[] = new int[iSize2];

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

	int iRet = obj.DiffArray(Arr,iSize1,Brr,iSize2);

	System.out.println("Difference is :"+iRet);

	}
}
