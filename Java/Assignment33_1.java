import java.util.*;

class Digits
{
	
	public int CountDemo(int iNo)
	{
		int iCnt = 0;
		while(iNo != 0)
		{
			iCnt++;
			iNo = iNo / 10;
		}
		return iCnt;

	}
}


class Assignment33_1
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the number :");

		int iDigit = sobj.nextInt();

		Digits aobj =  new Digits();

		int iRet = aobj.CountDemo(iDigit);

		System.out.println("Count of Digits is :"+iRet);
	}
}