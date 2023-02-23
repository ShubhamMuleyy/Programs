import java.util.*;

class StringDemo
{
	public int CountCapital(String s)
	{
		int iCnt = 0;
		for(int i = 0;i < s.length();i++)
		{
			if((s.charAt(i) >= 'A') && (s.charAt(i) <= 'Z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}


}


class Assignment31_1
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("String is :");
		String str = sobj.nextLine();

		StringDemo obj = new StringDemo();

		int iRet = obj.CountCapital(str);

		System.out.println("String count is :"+iRet);

		
	}

}