import java.util.*;


class MyArray
{
	public void DisplayEven(int Arr[],int Brr[])
	{
		System.out.println("Output of array 1 st is :");
		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			if(Arr[iCnt] % 2 == 0)
			{
				System.out.print("Even number is :");
				System.out.print(Arr[iCnt] + "\t");
			}
			
		}

		System.out.println("Output of array 2 nd is :");
		for(int iCnt1 = 0;iCnt1 < Brr.length;iCnt1++)
		{
			if(Brr[iCnt1] % 2 != 0)
			{
				System.out.print("Odd number is :");
				System.out.print(Brr[iCnt1] + "\t");
			}
	
		}

	}

}




class Assignment41_2
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

	obj.DisplayEven(Arr,Brr);

	}
}
