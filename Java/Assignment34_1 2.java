import java.util.*;

class Number
{
	boolean bFlag = false;

	public boolean Check(int Arr[],int No)
	{
		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			if(Arr[iCnt] == No)
			{
				 bFlag = true;
			}
		}
		return bFlag;
	}

}



class Assignment34_1
{
	public static void main(String s[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the size of an array :");
		int iSize = sobj.nextInt();

		int Arr[] = new int[iSize];
		System.out.println("Enter the elements of array :");

		for(int iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}

		System.out.println("Enter the number you want to check :");
		int iNo = sobj.nextInt();

		Number nobj = new Number();

		boolean bRet = nobj.Check(Arr,iNo);

		if(bRet == true)
		{
			System.out.println("Number is present :");
		}
		else
		{
			System.out.println("Number is not present :");
		}

	}
}