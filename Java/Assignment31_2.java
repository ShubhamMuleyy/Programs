import java.util.*;

class StringDemo
{
	public int SmallCount(String t)
	{
		int iCnt = 0;
		char Arr[] = t.toCharArray();

		for(int i = 0; i < Arr.length; i++)
        {
            if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
            {
                iCnt++;
            }
        }
        return iCnt;
	}

}


class Assignment31_2
{
	public static void main(String l[])
	{
		Scanner obj = new Scanner(System.in);

		System.out.println("Enter the string :");

		String s = obj.nextLine();

		StringDemo sobj = new StringDemo();

		int iRet = sobj.SmallCount(s);
		System.out.println("Number of count small letter is :"+iRet);
	}
}