import java.util.*;

class Digits
{
	public int CountDemo(int iNo)
	{
		int iCnt = 0;
		int iDigits = 0;
		int iSum = 1;
		while(iNo != 0)
		{
			iDigits = iNo % 10; 
			iSum = iSum * iDigits;
			iNo = iNo / 10;
		}
		return iSum;
	}
}


class Assignment33_4
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the number :");

		int iDigit = sobj.nextInt();

		Digits aobj =  new Digits();

		int iRet = aobj.CountDemo(iDigit);
		System.out.println("Multiplication of all digits is :"+iRet);
	}
}