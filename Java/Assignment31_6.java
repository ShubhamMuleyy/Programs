import java.util.*;

class StringDemo
{
	public void Reverse(String s)
	{
		System.out.println("Number of chacaters are : "+s.length());
		for(int iCnt = s.length() -1 ;s.length() > 0;iCnt--)
		{
			System.out.println(s.charAt(iCnt));
		}
	
	}
}



class Assignment31_6
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("ENter the string :");

		String str = sobj.nextLine();
		System.out.println("Number of chacaters are : "+str.length());

		StringDemo obj = new StringDemo();

		obj.Reverse(str);
	}
}