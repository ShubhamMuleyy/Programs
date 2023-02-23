import java.util.*;

class Digits
{
	public int CountDemo(int iNo)
	{
		int iCnt = 0;
		int iDigits = 0;
		int iSum = 0;
		int iSum1 = 0;
		while(iNo != 0)
		{
			iDigits = iNo % 10; 
			if(iDigits % 2 == 0)
			{
				iSum = iSum + iDigits;
			}
			else
			{
				iSum1 = iSum1 + iDigits;
			}
			iNo = iNo / 10;
		}
		return (iSum-iSum1);
	}
}


class Assignment33_5
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the number :");

		int iDigit = sobj.nextInt();

		Digits aobj =  new Digits();

		int iRet = aobj.CountDemo(iDigit);
		System.out.println("Count Diff of all digits is :"+iRet);
	}
}