import java.util.*;


class MyArray
{
	public void MinArray(int Arr[],int iSize1,int Brr[],int iSize2)
	{
		int Min1 = Arr[0];

		System.out.println("Output of array 1 st is :");
		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			if(Min1 > Arr[iCnt])
			{
				Min1 = Arr[iCnt];
			}
		}
		System.out.println("Minimum value of first array is :"+Min1);

		int Min2 = Brr[0];
		System.out.println("Output of array 2 nd is :");
		for(int iCnt1 = 0;iCnt1 < Brr.length;iCnt1++)
		{	
			if(Min2 > Brr[iCnt1])
			{
				Min2 = Brr[iCnt1];
			}
		}
		System.out.println("Minimum value of second array is :"+Min2);
	}	
}


class Assignment42_2
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

		obj.MinArray(Arr,iSize1,Brr,iSize2);

	}
}
