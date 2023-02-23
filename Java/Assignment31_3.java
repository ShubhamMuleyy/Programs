import java.util.*;

class StringDemo
{
	public int CountDiff(String s)
	{
		int iCnt1 = 0;
		int iCnt2 = 0;
		char Arr[]= s.toCharArray();

		for(int i = 0;i < Arr.length;i++)
		{
			if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
			{
				iCnt1++;
			}
			else if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
			{
				iCnt2++;
			}
		}	
		return(iCnt1-iCnt2);
	}
}


class Assignment31_3
{
	public static void main(String s[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the string :");
		
		String str = sobj.nextLine();
		
		StringDemo obj = new StringDemo();

		int iRet = obj.CountDiff(str);

		System.out.println("Difference is :"+iRet);

	}
}


